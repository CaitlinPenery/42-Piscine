/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:16:43 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/18 14:56:25 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a = 19;
	int	b = 5;
	int	*div = &a;
	int	*mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("Value of a is %d\n", *div);
	printf("Value of b is %d\n", *mod);
}*/
