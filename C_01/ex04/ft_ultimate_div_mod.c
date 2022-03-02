/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:55:56 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/18 13:22:03 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}
/*
int	main(void)
{
	int	i = 9;
	int	j = 8;
	int	*a = &i;
	int	*b = &j;

	ft_ultimate_div_mod(a, b);
	printf("div (*a) = %d\n", *a);
	printf("mod (*b) = %d\n", *b);
}*/
