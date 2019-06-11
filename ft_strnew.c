/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:40:16 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/11 13:20:29 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	p;
	char	*new;

	new = (char*)malloc(size * sizeof(char));
	if (new == NULL)
		return (NULL);
	p = 0;
	while (p < size)
	{
		new[p] = '\0';
		p++;
	}
	new[p] = '\0';
	return (*(&new));
}
