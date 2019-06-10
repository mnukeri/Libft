/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/10 17:59:56 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strspilt(char const *str, char c)
{
	char *st;
	int p;
	int k;
	int i;

	p = 0;
	k = 0;
	st = (char**)malloc(sizeof(char) * (ft_strlen(src) + 20));
	while (str[p] != '\0')
	{
		if (str[p] == c)
		{
			p++;
		}
		else
		{
			while (str[p] != c)
			{
				st[k][i] = str[p];
				p++;
				i++;
			}
			k++;
		}
	}
	st[k] = '\0';
	return (st);
}

int 	main()//int argc, char **argv)
{
	
	char **stp = "cause lately i have been a lil fed up, wish you would just";
	char **str;
	
	str = ft_strsplit(stp[1], ' ');
	printf("%s\n", stp);
	printf("%s", *str);
	/*
	int i = 0;

	if (argc < 1)
		return (0);
	while (i < 2)
		ft_strsplit(&argv[1][1], ' ');
	*/
	return (0);
}
