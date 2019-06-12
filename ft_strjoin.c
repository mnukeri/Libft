/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:07:52 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/12 18:21:35 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		p;
	int		k;
	char	*new;

	new = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	p = 0;
	k = 0;
	while (s1[p] != '\0')
	{
		new[k] = s1[p];
		p++;
		k++;
	}
	p = 0;
	while (s2[p] != '\0')
	{
		new[k] = s2[p];
		p++;
		k++;
	}
	new[k] = '\0';
	return (new);
}
