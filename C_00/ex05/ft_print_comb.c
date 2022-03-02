/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                                            */
/* ************************************************************************** */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*   Created: 2022/01/14 13:15:07 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/14 13:25:02 by cpenery          ###   ########.fr       */

#include <unistd.h>

void	ft_putchar_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = (num3 + 2);
	num2 = (num1 + 1);
	num3 = (num2 + 4);

	write(1, num1, num2, num3, 2);
}

int	main(void)
{
	ft_print_comb(3);
}
