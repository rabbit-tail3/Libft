/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:04:22 by thplemyu          #+#    #+#             */
/*   Updated: 2025/09/21 15:04:32 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			j++;
			flag = 1;
		}
		else if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (j);
}

static int	count_char(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[j] != c)
			j++;
		i++;
	}
	return (j);
}

static char	**twodfree(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		num_word;
	int		num_char;
	char	**ptr;

	num_word = count_word(s, c);
	ptr = (char **)ft_calloc(num_word + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s && i < num_word)
	{
		while (*s == c)
			s++;
		num_char = count_char(s, c);
		ptr[i] = ft_substr(s, 0, num_char);
		if (!ptr[i])
			ptr = twodfree(ptr);
		s += num_char;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
// int main(){
//   char **res = ft_split("a,d,3,d",',');
//   int i = 0;
//   while (res[i]){
//     printf("%s\n",res[i]);
//     i++;
//   }
// }
