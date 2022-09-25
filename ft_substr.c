/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:13:02 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/25 19:53:41 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;

	len_s = ft_strlen(s);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub || (size_t)start > (len_s - 1))
		return (NULL);
	if (len > len_s - start)
		len = len_s - start;
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
