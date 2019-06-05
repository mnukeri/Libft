/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:50:23 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/05 16:13:32 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			p;
	unsigned char	*st;
	unsigned char	*s;

	st = (unsigned char *)dest;
	s = (unsigned char *)src;
	p = 0;
	while (p < len)
	{
		st[p] = s[p];
		p++;
	}
	return (dest);
}
