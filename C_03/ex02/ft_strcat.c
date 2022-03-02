/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpenery <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:22:59 by cpenery           #+#    #+#             */
/*   Updated: 2022/01/24 16:24:39 by cpenery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		++j;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "42";
	char	destin[] = "Hello";

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destin);
	ft_strcat(destin, source);
	printf("Source after function: %s\n", destin);
}*/
