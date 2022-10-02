/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:41:14 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/02 09:35:45 by mapires-         ###   ########.fr       */
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
		del(nodo->content);
		free(nodo);
		nodo = save;
	}
	free(nodo);
	lst = NULL;
}
