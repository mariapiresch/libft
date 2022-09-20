#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
		if (*s++ == c)
		{
			//s--;
			return ((char *) s);
		}
	if (c == 0)
		return ((char *) s);
	return (NULL);
}
