/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:14:07 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/05 16:26:21 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			k;
	unsigned char	*st;

	st = (unsigned char *)str;
	k = 0;
	while (k < n)
	{
		if (st[k] == c)
		{
			return ((char*)&str[k]);
		}
		else
		{
			k++;
		}
	}
	return (0);
}
