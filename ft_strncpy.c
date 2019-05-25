/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:32:16 by mnukeri           #+#    #+#             */
/*   Updated: 2019/05/25 16:57:11 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t p;
	size_t k;

	p = 0;
	k = 0;
	while (src[0] != '\0' && k < len)
	{
		dest[p] = src[p];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}
