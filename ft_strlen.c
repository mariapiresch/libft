/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 01:12:49 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/14 01:29:31 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	const char	*s = "hola!";
	printf("Original: %s %zi\n", s, strlen(s));
	printf("El mio: %s %zi\n", s, ft_strlen(s));
	return (0);
}*/
