/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/19 18:26:28 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_rows(char *str)
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

char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	char	**y;

	rows = ft_rows(str);
	y = (char**)malloc(sizeof(char*) * rows);
	if (y == NULL)
		return (NULL);
	i = 0;
	while (i < 10)
	{
		y[i] = (char*)malloc(sizeof(char) * 10);
		if (y[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	j = 0;
	p = 0;
	while (str[p] != '\0' && i < 10)
	{
		if (str[p] == c)
		{
			i++;
			p++;
			j = 0;
		}
		else
		{
			y[i][j] = str[p];
			j++;
			p++;
		}
	}
	y[i][j] = '\0';
	return (y);
}

int main()
{
	char stp[] = "we just like playing the big party, yeah bruv, listen";
	char **cl;
	int		m;

	cl = ft_strsplit(stp, ' ');
	m = 0;
	while (m < 10)
	{
		printf("%s\n", cl[m++]);
	}
	return (0);
}
