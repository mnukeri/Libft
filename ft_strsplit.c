/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/11 18:34:45 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_malloc(int k, int p)
{
	int m;

	m = 0;
	while (m < k)
	{
		new[m] = (char*)malloc(p * sizeof(char));
		if (new[m] == NULL)
			return (NULL);
		m++;
	}
	new[m] = '\0';
	return (new);
}

int		ft_wc(char *str, int c)
{
	int p;
	int k;

	p = 0;
	k = 0;
	while (str[p] != '\0')
		if (str[p] == c)
			k++;
		p++;
	return (k);
}

char	**ft_strsplit(char const *str, char c)
{
	int p;
	int k;
	int m;
	char *st;
	char **new;

	st = (char*)str;
	k = ft_wc(st, c);
	new = (char **)malloc((k + 2) * sizeof(char *));
	if (new == NULL)
		return (NULL);
		
	p = 0;
	m = 0;
	while (st[p] != '\0')
	{
		k = 0;
		while (st[p] != ' ')
		{
			new[m][k] = st[p];
			p++;
			k++;
		}
		m++;
	}
	new[m][1] = '\0';
	return ((char **)new);
}

int 	main()
{
	
	char stp[] = "cause lately i have been a lil fed up, wish you would just";
	char **s;

	s = ft_strsplit(stp, ' ');	
	printf("%s\n", s[1]);
	printf("%s", stp);
	return (0);
}
