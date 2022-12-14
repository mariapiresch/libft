/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:41:14 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/12 09:56:37 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;
	t_list	*nodo;

	if (!lst || !del)
		return ;
	nodo = *lst;
	while (nodo)
	{
		save = nodo->next;
		ft_lstdelone(nodo, del);
		nodo = save;
	}
	*lst = nodo;
}
