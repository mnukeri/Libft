#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t p;
	size_t k;
	size_t rem;
	size_t m;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	rem = destsize - p;
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	m = 0;
	if (k < rem)
	{
		dest[p + m] = src[m];
		m++;
	}
	else
	{
		while (src[m] != '\0' && k < rem)
		{
			dest[p + m] = src[m];
			m++;
		}
	}
	return (p + k);
}

int	main()
{
	char str[50] = "this marks the rising";
	char stp[] = ", your heart doesn't stand a chance, it is getting hectic now";

	printf("%zu\n", ft_strlcat(str, stp, sizeof(str)));
	//printf("%zu", sizeof(str));
	return (0);
}
