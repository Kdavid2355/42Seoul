/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:02:57 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/31 19:08:28 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	ans = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			del((*f)(lst->content));
			ft_lstdelone(temp, del);
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, temp);
		lst = lst->next;
	}
	return (ans);
}

