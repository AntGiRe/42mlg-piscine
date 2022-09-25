/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:44:44 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/13 11:46:36 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	contador;

	contador = 0;
	while (src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	return (dest);
}
