/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:30:12 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/26 13:38:22 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dstn;
	int		len;
	int		i;

	dstn = (char *) malloc(sizeof(char) * ft_strlen(src));
	if (!dstn)
		return (NULL);
	len = ft_strlen(src);
	i = 0;
	while (len > i)
	{
		dstn[i] = src[i];
		i++;
	}
	dstn[i] = '\0';
	return (dstn);
}
