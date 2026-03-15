/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:10:02 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/17 17:16:53 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, (nmemb * size));
	return (tmp);
}
