/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/22 15:29:23 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wc(const char *str, char c)
{
	int		p;
	int		k;

	p = 0;
	k = 0;
	while (str[p])
	{
		if (str[p] == c && str[p + 1] != c)
			k++;
		p++;
	}
	return (k);
}

int		ft_chrcou(const char *str, char c)
{
	int		p;

	p = 0;
	while (str[p])
	{
		if (str[p] != c)
			p++;
	}
	return (p);
}

char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	int		k;
	int		rows;
	char	**y;

	rows = ft_wc(str, c) + 1;
	printf("%d\n", rows);
	y = (char**)malloc(sizeof(char*) * rows);
	if (y == NULL)
		return (NULL);
	i = 0;
	p = 0;
	while (str[p] != '\0' && i < rows)
	{
		while (str[p] == c && str[p])
			p++;
		if (str[p])
		{
			k = ft_chrcou(&str[p], c);
			printf("%d\n", k);
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
	char stp[] = "    The   does   of    the screen is changing with the motion you.   ";
/*	char **cl;
	int		m;

	cl = ft_strsplit(stp, ' ');
	m = 0;
	while (m < 13)
	{
		printf("%s\n", cl[m++]);
	}*/
	printf("%d\n", ft_chrcou(&stp, ' '));
	printf("%d", ft_wc(stp, ' '));
	return (0);
}
