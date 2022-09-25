/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:39:26 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/19 12:36:06 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter_dest;
	int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != '\0')
	{
		counter_dest++;
	}
	while (src[counter_src] != '\0')
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
