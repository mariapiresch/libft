/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:58:39 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/30 18:06:22 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	total;

	if (size > 4294967295 || count > 4294967295)
		return (NULL);
	total = size * count;
	s = (void *)malloc(total);
	if (!s)
		return (NULL);
	ft_memset(s, 0, total);
	return (s);
}
