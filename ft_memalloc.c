/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:35:57 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/07 18:15:25 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *space = (unsigned char *)malloc(sizeof(char) * size);
	//space = 0;
	return (space);
}

int	main()
{
	char str[] = "it is too much right now tho b";
	char *cl;

	cl = ft_memalloc(sizeof(str));
	printf("%s", ft_strcpy(cl, str));
	return (0);
}
