/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 04:11:50 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/12 11:01:47 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*save;

	if (!lst || !f)
		return (lst);
	result = (t_list *)malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	save = result;
	result->content = (*f)(lst->content);
	lst = lst->next;
	while (lst)
	{
		result->next = (t_list *)malloc(sizeof(t_list));
		if (!(result->next))
			ft_lstclear(&save, del);
		result = result->next;
		result->content = (*f)(lst->content);
		lst = lst->next;
	}
	result->next = NULL;
	return (save);
}
