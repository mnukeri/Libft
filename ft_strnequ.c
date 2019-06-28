/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:28:24 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/28 16:54:51 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t k;
	size_t p;

	if (s1 == NULL || s2 == NULL)
		return (0);
	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k] && k < n)
		k++;
	p = (unsigned char)s1[k] - (unsigned char)s2[k];
	if (p == 0)
		return (1);
	return (0);
}
