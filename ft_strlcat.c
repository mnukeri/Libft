/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:18:17 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/29 15:29:04 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t p;
	size_t k;
	size_t rem;
	size_t m;

	if (destsize == 0)
		return (0);
	p = ft_strlen(dest);
	k = ft_strlen(src);
	rem = destsize - p;
	m = 0;
	if (rem > k)
	{
		while (m < rem && src[m] != '\0')
		{
			dest[p + m] = src[m];
			m++;
		}
		dest[p + m] = '\0';
		return (p + m);
	}
	else
		return (p + rem + k);
}
