/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 10:51:46 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/27 18:23:25 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dig(int d)
{
	int		k;

	k = 0;
	while (d != 0)
	{
		d /= 10;
		k++;
	}
	return (k);
}

char		*ft_itoa(int n)
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
	p += ft_dig(n);
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
