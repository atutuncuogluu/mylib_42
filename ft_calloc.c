/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atutuncu <atutuncu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:57:07 by atutuncu          #+#    #+#             */
/*   Updated: 2023/01/02 14:20:17 by atutuncu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	len;

	len = count * size;
	result = malloc(len);
	if (!result)
		return (NULL);
	ft_bzero(result, len);
	return (result);
}
