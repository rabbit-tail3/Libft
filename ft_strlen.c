/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 07:36:44 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 16:28:48 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	a[] = "abcdefghijklmnou";
	int		b;
	int		c;

	b = strlen(a);
	printf("Original strlen: %u\n", b);
	c = ft_strlen(a);
	printf("Copy strlen: %u\n", c);
}*/
