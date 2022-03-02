/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:33:00 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/22 15:50:22 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abDd";
	int	result;

	result = ft_strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);
}*/
