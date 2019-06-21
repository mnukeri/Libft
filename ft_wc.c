/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 13:45:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/21 14:40:45 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wc(const char *str)
{
	int p;
	int k;
	char *cl;

	p = 0;
	k = 0;
	cl = ft_strtrim(str);
	while (str[p] != '\0')
	{
		if (str[p + 1] == ' ' || str[p + 1] == '\t')
			k++;
		p++;
	}
	return (k + 1);
}

int main()
{
	char stp[] = "  these pits are seeing the dogs rn, bruv, it is not too hectic yet tho	";

	printf("%d", ft_wc(stp));
	return (0);
}
