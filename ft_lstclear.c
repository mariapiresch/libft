/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:41:14 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/02 21:17:11 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;
	t_list	*nodo;

	nodo = *lst;
	while (nodo)
	{
		save = nodo->next;
		ft_lstdelone(nodo, del);
		nodo = save;
	}
}
