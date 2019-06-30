/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:05:08 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/28 14:39:15 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			k;
	unsigned char	*st;
	unsigned char	*str;
	
	if (dest == NULL && src == NULL)
		return (NULL);
	st = (unsigned char *)dest;
	str = (unsigned char *)src;
	k = 0;
	while (k < n)
	{
		st[k] = str[k];
		k++;
	}
	return (dest);
}
