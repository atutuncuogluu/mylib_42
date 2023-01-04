/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atutuncu <atutuncu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:40:55 by atutuncu          #+#    #+#             */
/*   Updated: 2023/01/03 15:43:09 by atutuncu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*iter;
	t_list	*ret;

	if (!lst || !del || !f)
		return (NULL);
	ret = 0;
	while (lst)
	{
		iter = ft_lstnew(f(lst->content));
		if (iter == NULL)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, iter);
		lst = lst->next;
	}
	return (ret);
}
