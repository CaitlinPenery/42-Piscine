/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:24:46 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/20 19:08:41 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{	
		if ((str[c] < 'A' || str[c] > 'Z') && (str[c] < 'a' || str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	char	alpha[] = "ABCDEFabcdef";
	char	spec[] = "abcABC]]..[";
	char	num[] = "123";
	char	blank[] = "";

	printf("Alphabet: %d\n", ft_str_is_alpha(alpha));
	printf("Special: %d\n", ft_str_is_alpha(spec));
	printf("Numbers: %d\n", ft_str_is_alpha(num));
	printf("Blank: %d\n", ft_str_is_alpha(blank));
}*/
