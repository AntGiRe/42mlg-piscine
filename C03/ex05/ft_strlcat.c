/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:33:48 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/19 18:35:27 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	long_dest;
	unsigned int	long_src;
	unsigned int	counter;

	counter = 0;
	long_dest = ft_strlen(dest);
	long_src = ft_strlen(src);
	if (size <= long_dest)
		return (size + long_src);
	else
	{
		while (src[counter] != '\0' && counter < (size - long_dest - 1))
		{
			dest[long_dest + counter] = src[counter];
			counter++;
		}
		dest[counter + long_dest] = '\0';
	}
	return (long_src + long_dest);
}
