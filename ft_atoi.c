/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atutuncu <atutuncu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:42:33 by atutuncu          #+#    #+#             */
/*   Updated: 2022/12/17 20:53:19 by atutuncu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(*(str + i)))
	{
		result = (result * 10) + (*(str + (i++))) - '0';
		if (result > 2147483648 && sign == -1)
			return (0);
		if (result > 2147483647 && sign == 1)
			return (-1);
	}
	return ((int)result * sign);
}
