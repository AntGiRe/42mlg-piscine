/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:10:33 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/20 17:35:58 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((s1[counter] != '\0' || s2[counter] != '\0') && counter < n)
	{
		if (s1[counter] > s2[counter])
			return (s1[counter] - s2[counter]);
		if (s1[counter] < s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}
