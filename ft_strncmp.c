/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:54:45 by mnukeri           #+#    #+#             */
/*   Updated: 2019/05/25 15:34:37 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t p;
	size_t k;

	p = 0;
	k = 1;
	while (s1[p] != '\0' && s2[p] != '\0' && s1[p] == s2[p] && k < n)
	{
		p++;
		k++;
	}
	return ((unsigned char)s1[p] - (unsigned char)s2[p]);
}
