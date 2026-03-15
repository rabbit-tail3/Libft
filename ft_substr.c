/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:19:34 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 16:27:43 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*a_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	a_s = (char *)malloc(len + 1);
	if (a_s == NULL)
		return (NULL);
	while (i < len)
	{
		a_s[i] = s[start + i];
		i++;
	}
	a_s[i] = '\0';
	return (a_s);
}
