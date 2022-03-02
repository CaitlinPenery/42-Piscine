/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:53:52 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/20 19:09:30 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] < '0') || (str[n] > '9'))
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	char	nbr[] = "0123456789";
	char	other[] = " kjhd';,`78";
	char	blank[] = "";

	printf("Numbers only: %d\n", ft_str_is_numeric(nbr));
	printf("All characters: %d\n", ft_str_is_numeric(other));
	printf("Blank: %d\n", ft_str_is_numeric(blank));
}*/
