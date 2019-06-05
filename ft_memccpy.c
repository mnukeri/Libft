/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:25:19 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/05 14:23:15 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			p;
	unsigned char	*st;
	unsigned char	*str;

	st = (unsigned char *)dest;
	str = (unsigned char *)src;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] == c)
		{
			ft_memcpy(st, str, p);
			p++;
			return ((char*)&dest[p]);
		}
		if (str[p] == '\0')
		{
			ft_memcpy(st, str, n);
		}
		else
		{
			p++;
		}
	}
	return (0);
}
