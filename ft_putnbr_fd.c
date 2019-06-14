/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:24:50 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/14 11:54:27 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int p;
	unsigned int k;

	p = 0;
	if (n >= 0)
		p = n;
	if (n < 0)
	{
		p = n * -1;
		write(fd, "-", 1);
	}
	if (p > 9)
		ft_putnbr_fd(p / 10, fd);
	k = p % 10 + '0';
	write(fd, &k, sizeof(k));
}
