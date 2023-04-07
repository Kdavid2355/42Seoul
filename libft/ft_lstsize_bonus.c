/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:41:03 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/28 16:49:45 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		cnt;

	cnt = 1;
	if (lst == NULL)
		return (0);
	temp = lst;
	while (temp->next != NULL)
	{
		cnt += 1;
		temp = temp->next;
	}
	return (cnt);
}
