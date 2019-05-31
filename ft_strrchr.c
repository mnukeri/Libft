#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int p;

	p = sizeof(s);
	while (s[p] != s[0])
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

int	main()
{
	char str[] = "it got to a point, when i decided, i can't do this anymore";

	printf("%s\n", ft_strrchr(str, 100));
	printf("%s", strrchr(str, 100));
	return (0);
}
