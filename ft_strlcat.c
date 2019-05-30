#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t p;
	size_t k;
	size_t rem;
	size_t m;

	p = ft_strlen(dest);
	k = ft_strlen(src);
	rem = destsize - p;
	m = 0;

	if (rem > k)
	{
		while (m < rem && src[m] != '\0')
		{
			dest[p + m] = src[m];
			m++;
		}
		dest[p + m] = '\0';
		return (p + m);
	}
	else
	{
		return (p + m + k);
	}
}
