/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:46:44 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/18 11:15:01 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	i = 1;
	int	j = 17;
	int	*a = &i;
	int	*b = &j;

	ft_swap(a, b);
	printf("i should be 1 and it is :  %u\n", *a);
	printf("j should be 17 and it is :  %u\n", *b);
}*/
