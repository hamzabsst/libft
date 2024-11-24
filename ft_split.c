/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:08:13 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/23 18:50:03 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
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

static void	*ft_free(char **str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free (str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	sizeof_string(const char *str, char c, int *start)
{
	int	size;

	size = 0;
	while (str[*start] == c && str[*start])
		(*start)++;
	while (str[*start] != c && str[*start])
	{
		size++;
		(*start)++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**results;
	int		words;
	int		start;
	int		i;
	int		size;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	words = count_word(s, c);
	results = (char **)malloc(sizeof(char *) * (words + 1));
	if (!results)
		return (NULL);
	while (i < words)
	{
		size = sizeof_string(s, c, &start);
		results[i] = malloc(sizeof(char) * size + 1);
		if (!results[i])
			return (ft_free(results, i));
		ft_strlcpy(results[i++], s + (start - size), size + 1);
	}
	results[i] = NULL;
	return (results);
}
/* #include <stdio.h>
int	main(void)
{
	int		i;
	char	**words = ft_split("hi ,come ,to ,bocal", ',');

	i = 0;
	while (words[i])
	{
		printf("%s", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
} */
