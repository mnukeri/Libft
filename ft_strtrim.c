/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:34:35 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/11 12:12:34 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		p;
	char	*new;
	int		m;

	new = (char*)malloc(ft_strlen(s) * sizeof(char));
	if (new == NULL)
		return (NULL);
	p = 0;
	m = 0;
	while (ft_isprint(s[p]) == 0 || s[p] == ' ')
	{
		if (s[p] == ' ' || s[p] == '\t' || s[p] == '\n')
			p++;
	}
	while (ft_isprint(s[p]) == 1)
	{
		new[m] = s[p];
		p++;
		m++;
	}
	m--;
	new[m] = '\0';
	return (new);
}
