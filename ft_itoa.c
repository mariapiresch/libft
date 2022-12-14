/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:25:39 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/27 19:16:43 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		len ++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*ptr;
	long long	nb;

	nb = n;
	len = ft_len(nb);
	ptr = (char *)malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		ptr[0] = '0';
	ptr[len - 1] = '\0';
	while (nb > 0)
	{
		ptr[len - 2] = (nb % 10) + '0';
		nb /= 10;
		len --;
	}
	return (ptr);
}

/*int	main(void)
{
	int	n = -89;
	char *res = ft_itoa(n);
	printf("%s %i", res, ft_len(n));
	free(res);
	return (0);
}*/
