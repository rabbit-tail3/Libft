/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:34:59 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/19 22:00:29 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cd(int a)
{
	int	count;

	count = 0;
	if (a <= 0)
		count++;
	while (a != 0)
	{
		a /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	num;

	num = n;
	len = cd(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	while (num != 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
