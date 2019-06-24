/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/24 17:49:57 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	int		rows;
	char	**y;

	if (!(y = (char**)malloc(sizeof(char*) * (ft_wc(str, c)))))
		return (NULL);
	rows = ft_wc(str, c);
	i = 0;
	p = 0;
	while (str[p] && i < rows)
	{
		while (str[p] == c && str[p])
			p++;
		y[i] = ft_memalloc(15);
		j = 0;
		while (str[p + j] != '\0' && str[p + j] != c)
			j++;
		y[i] = ft_strsub(str, p, j);
		p = p + j;
		i++;
	}
	y[i] = NULL;
	return (y);
}

int		main(void)
{
	char stp[] = "bu the  iyou  ";// keys be playing hard , all 4our of 'em  ";
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
