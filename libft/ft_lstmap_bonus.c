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
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	ans = NULL;
	while (lst != NULL)
	{
		temp = (*f)(lst->content);
		tmp = ft_lstnew(temp);
		if (!tmp)
		{	
			del(temp);
			ft_lstdelone(tmp, del);
			ft_lstclear(&ans, del);
			return (NULL);
		}
		ft_lstadd_back(&ans, tmp);
		lst = lst->next;
	}
	return (ans);
}
