/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 13:31:19 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/21 13:40:18 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_finder(const char *str, char c)
{
	int p;
	int k;

	p = 0;
	k = 0;
	while (str[p] != '\0')
	{
		if (str[p] == c)
			k++;
		p++;
	}
	return (k);
}
