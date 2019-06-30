/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:32:16 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/29 15:45:44 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t p;
	size_t k;

	if (len == 0)
		return (0);
	p = 0;
	k = 0;
	while (src[p] != '\0' && k < len)
	{
		dest[p] = src[p];
		p++;
		k++;
	}
	return (dest);
}
