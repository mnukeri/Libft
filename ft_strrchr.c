#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int p;

	p = sizeof(s);
	while (p >= 0)
	{
		if (s[p] == c)
		{
			return ((char*)&s[p]);
		}
		else
		{
		p--;
		}
	}
	return (0);
}
