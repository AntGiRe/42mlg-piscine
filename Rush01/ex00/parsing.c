/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcara-ca <jcara-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:02:47 by jcara-ca          #+#    #+#             */
/*   Updated: 2022/07/17 20:04:47 by jcara-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

int	check(int args, char **string)
{
	if (args != 2)
		return (1);
	if (ft_strlen(string[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	row;
	int	column;
	int	*output;
	int	counter;

	output = malloc(4 * 16);
	counter = 0;
	if (!output)
		return (0);
	row = 0;
	column = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] > '0' && str[counter] < '5')
		{
			output[column] = str[counter] - '0';
			column++;
		}
		counter++;
	}
	return (output);
}
