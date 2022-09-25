/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:49:03 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/15 10:48:14 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] >= 'A' && str[contador] <= 'Z')
			str[contador] = str[contador] + 32;
		if (str[contador] >= 'a' && str[contador] <= 'z')
			if (str[contador - 1] < 'a' || str[contador - 1] > 'z')
				if (str[contador - 1] < 'A' || str[contador - 1] > 'Z')
					if (str[contador - 1] < '0' || str[contador - 1] > '9')
						str[contador] = str[contador] - 32;
		contador++;
	}
	return (str);
}
