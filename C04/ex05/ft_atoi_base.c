/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:42:43 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/25 19:28:07 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
		counter++;
	return (counter);
}

int	transform_minus(int number, int counter_minus)
{
	if (counter_minus % 2 == 1)
		number = number * -1;
	return (number);
}

int	check_conditions(char *str)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	while (str[counter] != '\0')
	{
		if ('+' == str[counter] || '-' == str[counter] || ' ' == str[counter])
			return (1);
		counter++;
	}
	return (0);
}

int	char_exists(char str, char *base)
{
	int	i;
	int	len;

	len = ft_strlen(base);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	counter_minus;

	i = 0;
	res = 0;
	counter_minus = 0;
	if (check_conditions(base) == 1)
		return (0);
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			counter_minus++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (char_exists(str[i], base) < ft_strlen(base))
			res = (char_exists(str[i], base)) + (res * ft_strlen(base));
		i++;
	}
	return (transform_minus (res, counter_minus));
}
