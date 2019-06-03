/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:40:46 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/03 15:50:00 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	int p;
	int k;

	p = ft_isalpha(c);
	k = ft_isdigit(c);
	if (p > 0 || k > 0)
		return (1);
	else
		return (0);
}