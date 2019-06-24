/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/24 14:50:23 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		ft_wc(const char *str, char c)
{
	int		p;
	int		k;

	p = 0;
	k = 0;
	while (str[p])
	{
		if (str[p] == c && str[p - 1] != c)
			k++;
		p++;
	}
	return (k);
}

char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	int		rows;
	char	**y;

	rows = ft_wc(str, c) + 1;
	y = (char**)malloc(sizeof(char*) * rows);
	if (y == NULL)
		return (NULL);
	i = 0;
	p = 0;
	while (str[p] != '\0' && i < rows)
	{
		while (str[p] == c && str[p])
			p++;
		if (ft_isprint(str[p]) == 1)
		{
			y[i] = (char*)malloc(sizeof(char) * 15);
			if (y[i] == NULL)
				return (NULL);
			j = 0;
			while (str[p] && str[p] != c)
			{
				y[i][j] = str[p];
				j++;
				p++;
			}
			y[i][j] = '\0';
		}
		i++;
	}
	y[i] = NULL;
	return (y);
}

int main()
{
	char stp[] = "  Cav' your  boi   doing the most  just  net vir kontrol, neh   but do not forget to  not   catch feelings bruv,  yeah yeah she's cutest and all   but     bruv,  please,   'rather the flu than      feelings     .  ";
	char **cl;
	int		m;
	int rows;

	rows = ft_wc(stp, ' ');
	printf("rows: %d\n", rows);
	cl = ft_strsplit(stp, ' ');
	m = 0;
	while (cl[m])
	{
		printf("%s\n", cl[m++]);
	}
	return (0);
}
