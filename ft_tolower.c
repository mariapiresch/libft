/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 01:38:16 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/14 01:42:49 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	return (c);
}

/*int	main(void)
{
	int	c = 90;
	printf("Original: %i %i\n", c, tolower(c));
	printf("El mio: %i %i\n", c, ft_tolower(c));
	return (0);
}*/
