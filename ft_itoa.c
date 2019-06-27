/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 10:51:46 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/27 18:11:52 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		p;
	char	*st;
	int		m;

	p = 0;
	if (n < 0)
	{
		p++;
		n = n * -1;
	}
	m = n;
	while (n != 0)
	{
		n /= 10;
		p++;
	}
	if (!(st = (char*)malloc(sizeof(char) * (p + 1))))
		return (NULL);
	st[p] = '\0';
	p--;
	while (p >= 0)
	{
		st[p--] = (m % 10) + 48;
		m /= 10;
	}
	if (st[0] == '0')
		st[0] = '-';
	return (st);
}

int	main()
{
	int p = 1354;
	char *cl;

	cl = ft_itoa(p);
	printf("%s", cl);
	return (0);
}
