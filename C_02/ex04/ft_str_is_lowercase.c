/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:03:38 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/22 19:02:02 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	lowercase[] = "abcdefg";
	char	other[] = "4686GKGKGK";
	char	empty[] = "";

	printf("Lowercase: %d\n", ft_str_is_lowercase(lowercase));
	printf("Other: %d\n", ft_str_is_lowercase(other));
	printf("Empty: %d\n", ft_str_is_lowercase(empty));
}*/
