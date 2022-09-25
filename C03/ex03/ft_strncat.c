/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:46:23 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/19 13:06:11 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != 0)
	{
		counter_dest++;
	}
	while (src[counter_src] != '\0' && counter_src < nb)
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
