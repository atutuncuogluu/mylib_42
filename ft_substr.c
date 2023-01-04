/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atutuncu <atutuncu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:43:07 by atutuncu          #+#    #+#             */
/*   Updated: 2022/12/18 17:00:19 by atutuncu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	j;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	new_str = (char *)malloc(len + 1);
	if (!s || !new_str)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		new_str[j++] = s[start++];
	new_str[j] = '\0';
	return (new_str);
}
