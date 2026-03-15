/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 07:36:17 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 16:29:35 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_;

	c_ = (char)c;
	while (*s != '\0' && c_ != *s)
	{
		s++;
	}
	if (c_ == *s)
	{
		return ((char *)s);
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "this is a sample string";
	char	*pch;

	pch = strchr(str, 's');
	while (pch != NULL)
	{
		printf("Found at %d\n", pch - str + 1);
		pch = strchr(pch + 1, 's');
	}
}
*/
