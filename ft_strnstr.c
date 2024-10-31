/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:47:04 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/31 11:02:56 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (big);
	while (big[i])
	{
		while (big[i + j] && little[j] && big[i + j] && j < len)
			j++;
		if (little[j] == '\0')
			return (big + i);
		i++;
		j = 0;
	}
	return (0);
}
/*int main()
{
	char *find = "eat";
	char *str = "sweater";
	printf("%s", ft_strnstr(str, find, 2));

}*/
