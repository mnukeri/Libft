/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:15:49 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/03 19:01:38 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
		int p;

		p = 0;
		while (p < 127)
		{
			if (isprint(p) == 0)
			{
				write(1, c, 1);
				p++;
			}
			else
			{
				p++;
			}
		}
}

int		main()
{
	//printf("%d\n", ft_isprint('#'));
	printf("%d\n", isprint(43));
	printf("%c", 43);
	return (0);
}
