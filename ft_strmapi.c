/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:11:14 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/25 18:18:03 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	size;
	int		i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	res = malloc(size + 1);
	if (!s || !res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/* char rot13(unsigned int i, char c)
{
	i = 1;
	return c + i;
}

int main()
{
	char *res = ft_strmapi("abc", rot13);
	printf("%s", res);
	free(res);
} */
