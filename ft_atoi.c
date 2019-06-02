#include "libft.h"

int	ft_atoi(const char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0' && str[k] != ',')
	{
		if ((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z'))
		{
			k++;
		}
		else
		{
			write(1, &str[k], 1);
			if (str[k + 1] == ',')
				break;
			k++;
		}
	}
	return(0);
}

int	main()
{
	char stp[] = "3249,587";//skyline, I'm goinfg to reach that Skyline tho, be on that lookout";

	printf("%d\n", ft_atoi(stp));
	printf("%d", atoi(stp));
	return (0);
}
