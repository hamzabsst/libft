/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:08:13 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/01 14:54:50 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			counter++;
		i++;
	}
	return (counter);
}

char	*ft_strndup(const char *s, int size)
{
	char	*copy;

	copy = malloc(size + 1);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, size + 1);
	return (copy);
}

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		index;
	int		start;

	res = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !(res))
		return (NULL);
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[index] = ft_strndup(s + start, i - start);
			index++;
		}
	}
	res[index] = NULL;
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	int		i;
	char	**words = ft_split("pe pe p epe", ' ');

	i = 0;
	while (words[i])
	{
		printf("%s", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}*/
