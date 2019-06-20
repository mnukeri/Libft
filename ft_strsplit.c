/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/20 17:02:53 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"
/*
static int		ft_rows(const char *str, char c)
{
	int k;
	int p;

	k = 0;
	p = 0;
	while (str[k] != '\0')
	{
		if (str[k] == c)
			k++;
		p++;
	}
	return (k + 1);
}
*/
char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	//int		rows;
	char	**y;

	//rows = ft_rows(str, c);
	//printf("%d\n", rows);
	y = (char**)malloc(sizeof(char*) * 11);
	if (y == NULL)
		return (NULL);
	/*i = 0;
	while (i < 10)
	{
		y[i] = (char*)malloc(sizeof(char) * 10);
		if (y[i] == NULL)
			return (NULL);
		i++;
	}*/
	i = 0;
	j = 0;
	p = 0;
	while (str[p] != '\0' && i < 10)
	{
		while (str[p] == c && str[p])
		{
			p++;
		}
		
		if (str[p])
		{
			y[i] = (char *)malloc(sizeof(char) * 10);
			while (str[p] && str[p] != c)
			{
				y[i][j] = str[p];
				j++;
				p++;
			}
			y[i][j] = '\0';
			j = 0;
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
