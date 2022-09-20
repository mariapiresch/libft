/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:25:08 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/19 23:08:28 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*int main()
{
    char str[20] = "Esto es una prueba";
	char str2[20] = "Esto es una prueba";
    printf("Before memset(): %s\n", str);
    memset(str, '*', 8*sizeof(char));
	ft_memset(str2, '*', 8*sizeof(char));
    printf("After memset():  %s\n", str);
	printf("After ft_memset(): %s\n", str2);
    return (0);
}*/
