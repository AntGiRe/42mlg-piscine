/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:38:11 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/22 13:47:47 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	len_params(char **argv)
{
	int	i;

	i = 0;
	while (argv[i] != 0)
		i++;
	return (i - 1);
}

void	ft_print_params(char **argv)
{
	char	*str;
	int		i;
	int		j;

	i = len_params(argv);
	while (i > 0)
	{
		str = argv[i];
		j = 0;
		while (str[j] != '\0')
		{
			ft_putchar(str[j]);
			j++;
		}
		if (i != 1)
			ft_putchar('\n');
		i--;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argv);
}
