/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 20:04:25 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/20 16:27:44 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - (i - 1)));
}
