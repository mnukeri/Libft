/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:32:16 by mnukeri           #+#    #+#             */
/*   Updated: 2019/07/01 13:12:49 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t p;
	size_t k;

	if (!(src))
		return (0);
	if (len == 0)
		return (0);
	ft_bzero(dest, len);
	p = 0;
	k = 0;
	while (src[p] && k < len)
	{
		dest[p] = src[p];
		p++;
		k++;
	}
	return (dest);
}
