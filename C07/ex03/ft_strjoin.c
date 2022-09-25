/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:40:26 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/26 13:39:48 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	if (!s)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
