/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 14:32:19 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/16 15:49:12 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int p;

	p = 0;
	if (s == NULL)
		return ;
	if (f == NULL)
		return ;
	while (s[p] != '\0')
	{
		f(&s[p]);
		p++;
	}
}
