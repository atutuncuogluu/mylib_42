/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atutuncu <atutuncu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:18:53 by atutuncu          #+#    #+#             */
/*   Updated: 2022/12/18 15:19:56 by atutuncu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*result;

	result = (unsigned char *)b;
	while (len > 0)
	{
		*result = (unsigned char)c;
		len--;
		result++;
	}
	return (b);
}
