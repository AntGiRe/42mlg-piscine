/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:01:30 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/18 11:29:42 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] >= 'a' && str[contador] <= 'z')
			str[contador] = str[contador] - 32;
		contador++;
	}
	return (str);
}
