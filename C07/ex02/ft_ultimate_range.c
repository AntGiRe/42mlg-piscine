/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:30:19 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/27 10:44:46 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*numbers;
	int	counter;

	if (min >= max)
		return (NULL);
	numbers = (int *) malloc(sizeof(int) * (max - min));
	if (!numbers)
		return (NULL);
	i = min;
	counter = 0;
	while (i < max)
	{
		numbers[counter] = i;
		i++;
		counter++;
	}
	return (numbers);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
