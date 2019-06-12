/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:41:29 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/12 17:56:27 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t	p;
	size_t	k;
	char	*new;

	p = 0;
	while (str[p] != '\0' && p < start)
		p++;
	new = (char*)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	k = 0;
	while (str[p] != '\0' && k < len)
	{
		new[k] = str[p];
		p++;
		k++;
	}
	new[k] = '\0';
	return (new);
}
