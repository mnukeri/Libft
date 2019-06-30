/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 10:51:46 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/30 18:02:12 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dig(int d)
{
	int		k;

	k = 1;
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
	int		neg;

	if (n < -2147483648 || n > 2147483647)
		return (NULL);
	p = ft_dig(n);
	neg = 1;
	if (n < 0)
	{
		p++;
		neg = -1;
	}
	if (!(st = (char*)malloc(sizeof(char) * (p + 1))))
		return (NULL);
	ft_memset(st, '\0', p + 1);
	p--;
	if (neg == -1)
		st[0] = '-';
	while (p >= 0 && st[p] != '-')
	{
		st[p--] = ((n % 10) * neg) + 48;
		n /= 10;
	}
	return (st);
}
