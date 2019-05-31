#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int p;

	p = 0;
	while (s[p] != '\0')
	{
		if (s[p] == c)
		{
			return ((char *)&s[p]);
		}
		else
		{
			p++;
		}
	}
	return (0);
}
