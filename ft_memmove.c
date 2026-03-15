/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:06:13 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 16:30:46 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	if (dst_c > src_c)
	{
		while (n--)
		{
			dst_c[n] = src_c[n];
		}
	}
	else
		dst_c = ft_memcpy(dst, src, n);
	return (dst_c);
}
