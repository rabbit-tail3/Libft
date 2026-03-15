/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 07:37:34 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 13:04:14 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	size_t			i;
	unsigned char	*str_c;

	i = 0;
	str_c = (unsigned char *)str;
	while (i < num)
	{
		if (str_c[i] == (unsigned char)c)
		{
			return ((void *)(str_c + i));
		}
		i++;
	}
	return (0);
}
// int	main()
// {
// 	char str[] = "abcdefg";
// 	char *a = ft_memchr(str,'c', 4);
// 	printf("%s", a);
// }
