#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int p;
	int k;

	p = 0;
	while (s1[p] != '\0')
	{
		p++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		s1[p + k] = s2[k];
		k++;
	}
	s1[p + k] = '\0';
	return (s1);
}
