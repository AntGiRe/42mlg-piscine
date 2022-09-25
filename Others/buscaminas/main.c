/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:59:15 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/27 12:54:57 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_tablero(char *tablero, int show_bombs);
int		ft_calcbombs(char *tablero, int n);
void	fill_tablero(char *tablero);
void	ft_endgame(char *tablero);

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

int	move_game(int x, int y, char *tablero)
{
	int	game;

	game = 1;
	if (y >= 0 && y <= 9 && x >= 0 && x <= 9)
	{
		if (tablero[x + y * 10] != 'x' && tablero[x + y * 10] != 'o')
			printf(" ----- Casilla previamente comprobada\n");
		if (tablero[x + y * 10] == 'x')
		{
			game = 0;
			printf("Fin del juego. \n");
			print_tablero(tablero, 1);
		}
		if (tablero[x + y * 10] == 'o')
		{
			printf(" ----- Casilla vacia\n");
			tablero[x + y * 10] = ft_calcbombs(tablero, x + y * 10) + '0';
		}
	}
	else
		printf(" ----- Coordenadas erroneas\n");
	return (game);
}

void	game_on(char *tablero)
{
	int	game;
	int	x;
	int	y;

	game = 1;
	fill_tablero(tablero);
	print_tablero(tablero, 0);
	while (game != 0)
	{
		printf("Introduce valor y: ");
		scanf("%i", &y);
		printf("Introduce valor x: ");
		scanf("%i", &x);
		if (move_game(x, y, tablero) != 0)
			print_tablero(tablero, 0);
		else
			game = 0;
	}
	ft_endgame(tablero);
}

int	main(void)
{
	char	s;
	char	*tablero;
	int		game;
	int		y;
	int		x;

	s = 'y';
	tablero = (char *) malloc(sizeof(char) * 100);
	ft_print_header42();
	while (s == 'y')
	{
		game_on(tablero);
		printf("¿Quieres jugar de nuevo? (y/n)");
		scanf("%s", &s);
	}
	printf("Nos entristece que te marches.\n");
	free(tablero);
	return (0);
}
