/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:02:57 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/28 22:37:25 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*ans;
	int		len;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	ans = NULL;
	temp = lst;
	while (temp != NULL)
	{
		new = ft_lstnew(temp->content);
		if (!new)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		ans = ft_lstadd_back(&ans, new);
		temp = temp->next;
	}
	ft_isiter(ans, f);
	return (ans);
}
