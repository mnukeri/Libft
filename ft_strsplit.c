/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/24 18:39:13 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *str, char c)
{
	int		p;
	int		i;
	int		j;
	int		rows;
	char	**y;

	rows = ft_wc(str, c);
	if (!(y = (char**)malloc(sizeof(char*) * rows)))
		return (NULL);
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
