/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:29:47 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/20 19:30:39 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	uppercase[] = "ABCD";
	char	lowercase[] = "abcdefg";
	char	other[] = "4686GKGKGK";
	char	empty[] = "";

	printf("Uppercase: %d\n", ft_str_is_uppercase(uppercase));
	printf("Lowercase: %d\n", ft_str_is_uppercase(lowercase));
	printf("Other: %d\n", ft_str_is_uppercase(other));
	printf("Empty: %d\n", ft_str_is_uppercase(empty));
}*/
