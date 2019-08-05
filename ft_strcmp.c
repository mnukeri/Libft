/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:28:48 by mnukeri           #+#    #+#             */
/*   Updated: 2019/05/25 14:52:32 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (ft_isalpha(s1[i]) == 1 && ft_isalpha(s2[i]) == 1)
	{
		if (ft_iscaps(s1[i]) == 1 && ft_iscaps(s2[i]) != 1)
			return (1);
	}
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (0);
}
int	main()
{
	char s[] = "libft-U";
	char st[] = "libft-u";

	ft_putnbr(ft_strcmp(s, st));
	ft_putchar('\n');
	return (0);
}
