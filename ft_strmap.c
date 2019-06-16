/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 16:17:29 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/16 16:47:28 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	k;
	unsigned int	p;
	unsigned int	m;
	char			*new;

	m = ft_strlen(s) + 1;
	new = (char*)malloc(sizeof(char) * m);
	if (new == NULL)
		return (NULL);
	if (s == NULL || f == NULL)
		return (NULL);
	k = 0;
	p = 0;
	while (s[p] != '\0')
	{
		new[k] = f(*(char*)&s[p]);
		p++;
		k++;
	}
	new[k] = '\0';
	return (new);
}
