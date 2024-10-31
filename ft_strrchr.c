/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:51:24 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/31 11:02:58 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	size;

	size = ft_strlen(s) - 1;
	while (s[size])
	{
		if (s[size] == c)
		{
			return ((char *)s + size);
		}
		size--;
	}
	return (0);
}
/*int main()
{
	char *c = strrchr("ahamzaop", 'a');
	printf("%s", c);
	printf("\n");
	char *d = ft_strrchr("ahamzaop", 'a');
	printf("%s", d);

}*/
