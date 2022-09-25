/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:09:37 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/18 11:29:46 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] >= 'A' && str[contador] <= 'Z')
			str[contador] = str[contador] + 32;
		contador++;
	}
	return (str);
}
