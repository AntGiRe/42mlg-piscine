/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:48:43 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/18 13:27:43 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while (contador < n && src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	while (contador < n)
	{
		dest[contador] = '\0';
		contador++;
	}
	return (dest);
}
