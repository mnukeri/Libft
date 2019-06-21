/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/21 14:42:01 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	int		rows;
	char	**y;

	rows = ft_wc(str);
	printf("%d\n", rows);
	y = (char**)malloc(sizeof(char*) * 11);
	if (y == NULL)
		return (NULL);
	i = 0;
	p = 0;
	while (str[p] != '\0' && i < 10)
	{
		while (str[p] == c && str[p])
			p++;
		if (str[p])
		{
			y[i] = (char*)malloc(sizeof(char) * 10);
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
	char stp[] = "The  does of the screen is changing with the motion";
	char **cl;
	int		m;

	cl = ft_strsplit(stp, ' ');
	m = 0;
	while (m < 10)
	{
		printf("%s\n", cl[m++]);
	}
	//printf("%s", cl[3]);
	return (0);
}
