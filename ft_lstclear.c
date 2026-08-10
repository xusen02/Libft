/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:25:58 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/07 19:45:08 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*next_n;

	if (!lst || !del)
		return ;
	now = *lst;
	while (now != NULL)
	{
		next_n = now->next;
		ft_lstdelone(now, del);
		now = next_n;
	}
	*lst = NULL;
}
