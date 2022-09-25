/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:37:52 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/27 13:17:31 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_print_header42(void)
{
	printf("/* *********************************");
	printf("***************************************** */\n");
	printf("/*                                 ");
	printf("                                           */\n");
	printf("/*                                      ");
	printf("                  :::      ::::::::   */\n");
	printf("/*   EL                                 ");
	printf("                :+:      :+:    :+:   */\n");
	printf("/*                                       ");
	printf("             +:+ +:+         +:+     */\n");
	printf("/*   AHORCADO MALAGUEÑO                  ");
	printf("           +#+  +:+       +#+        */\n");
	printf("/*                                     ");
	printf("           +#+#+#+#+#+   +#+           */\n");
	printf("/*                                      ");
	printf("               #+#    #+#             */\n");
	printf("/*                                      ");
	printf("              ###   ########.fr       */\n");
	printf("/*                                       ");
	printf("                                     */\n");
	printf("/* ***************************************");
	printf("*********************************** */\n\n");
}

int	print_string(char *str, char *letras)
{
	int	i;
	int	j;
	int	flag;
	int c;
	
	i = 0;
	flag = 1;
	c = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letras[j] != '\0' && flag != 0)
		{
			if (letras[j] == str[i])
			{
				flag = 0;
				printf("%c ", str[i]);
				c++;
			}
			j++;
		}
		if (flag == 1)
			printf("_ ");
		flag = 1;
		i++;
	}
	printf("\n");
	return (c);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_draw_life(int life)
{
	int	i;

	i = 0;
	printf("\n");
	printf("Vidas restantes: ");
	while (i < life)
	{
		printf("<3 ");
		i++;
	}
	printf("\n");
}

int	game_on(char *str, char *letras)
{
	char	c;
	int		game;
	int		i = 0;
	int		size = 0;
	int		life = 3;
	int		other = 0;
	int		another = 0;
	game = 1;
	if (ft_strlen(str) > 1)
	{
		while (game != 0 && life > 0)
		{
			printf("Introduce un caracter: ");
			scanf("%s", &c);
			letras[size++] = c;
			i = 0;
			system("clear");
			other = print_string(str, letras);
			if (other == ft_strlen(str))
				return (0);
			if (another == other)
				life--;
			ft_draw_life(life);
			printf("Caracteres introducidos: ");
			while (letras[i] != '\0')
				printf("%c - ", letras[i++]);
			printf("\n");
			another = other;
		}
		if (life == 0)
			printf("la palabra era: %s\n", str);
	}
	else
	{
		printf("Palabra introducida errónea. ");
		return (-1);
	}
	return (1);
}

int	main(void)
{
	char	str[128];
	char	*letras;
	char	c;

	ft_print_header42();
	letras = malloc(sizeof(char) * 26);
	while (c != 'n')
	{
		printf("Introduce la palabra: ");
		scanf("%s", str);
		system("clear");
		print_string(str, letras);
		ft_draw_life(3);
		game_on(str, letras);
		printf("¿Quieres jugar de nuevo? (y/n)");
		scanf("%s", &c);
	}
	printf("Nos pone triste que te marches :c\n");
}