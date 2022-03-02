/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:31:04 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/20 19:59:49 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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
	char	unprintable[] = "\t (tab), \a (?)";
	char	other[] = "4686GKGKGK";
	char	empty[] = "";

	printf("Uppercase: %d\n", ft_str_is_printable(uppercase));
	printf("Lowercase: %d\n", ft_str_is_printable(lowercase));
	printf("Unprintable: %d\n", ft_str_is_printable(unprintable));
	printf("Other: %d\n", ft_str_is_printable(other));
	printf("Empty: %d\n", ft_str_is_printable(empty));
}*/
