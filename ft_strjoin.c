/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atutuncu <atutuncu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:24:45 by atutuncu          #+#    #+#             */
/*   Updated: 2022/12/17 22:33:50 by atutuncu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 && s2)
		return (NULL);
	i = 0;
	result = (char *)malloc(s1_len + s2_len + 1);
	if (!result)
		return (NULL);
	while (i < s1_len || i < s2_len)
	{
		if (i < s1_len)
			result[i] = s1[i];
		if (i < s2_len)
			result[i + s1_len] = s2[i];
		i++;
	}
	result[s1_len + s2_len] = '\0';
	return (result);
}
