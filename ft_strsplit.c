/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:41:00 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/18 17:55:55 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_rows(char *str, char c)
{
	int p;
	int k;

	p = 0;
	k = 0;
	while (str[p] != 0)
	{
		if (str[p] == c)
			k++;
		p++;
	}
	return (k + 1);
}

int		ft_cols(char *str, char ct)
{
	int k;

	k = 0;
	while (str[k] != ct)
	{
		k++;
	}
	return (k);
}

char	**ft_strsplit(char const *str, char c)
{
	size_t	p;
	size_t	i;
	size_t	j;
	size_t	rows;
	size_t	cols;
	char	**st;
	char	*sti;

	rows = ft_rows(str);
	

}

int main()
{
	char stp[] = "you are just a big baddie rn";
	//char *cl;

	//cl = *ft_strsplit(stp, ' ');
	printf("%d", ft_rows(stp, ' '));
//	printf("%s", cl);
	return (0);
}
