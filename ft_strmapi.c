/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:33:58 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 16:28:46 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nstr;

	i = 0;
	if (!s)
		return (NULL);
	nstr = malloc(ft_strlen(s) + 1);
	if (!nstr)
		return (NULL);
	while (i < ft_strlen(s))
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*
char	test_fn(unsigned int index, char c)
{
	if(index % 2 == 0)
		return (c - 32);
	else
		return (c);
}
int	main(void)
{
	char str[] = "ababaaba";
	char *re = ft_strmapi(str, test_fn);
	printf("%s", re);
}*/
