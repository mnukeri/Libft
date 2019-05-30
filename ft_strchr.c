#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int p;

	p = 0;
	while (s[p] != '\0')
	{
		if (s[p] != c)
		{
		
		}
	}
}

int	main()
{
	char str[] = "So betrayed by the look in your eye";

	printf("%s\n", ft_strchr(str, 107));
	printf("%s", strchr(str, 107));
	return (0);
}
