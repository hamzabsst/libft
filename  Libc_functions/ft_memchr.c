/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:27:05 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/27 10:24:38 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*src;

	src = (char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
		{
			return ((char *)&src[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "abdo";
	char c = 'd';
	char *result;
	result = ft_memchr(str, c, 2);
	printf("%s", result);
}*/