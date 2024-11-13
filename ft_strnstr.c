/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:47:04 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/12 23:53:48 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] && little[j] && i + j < len
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
		j = 0;
	}
	return (NULL);
}
/*int main()
{
	char *find = "eat";
	char *str = "sweater";
	printf("%s", ft_strnstr(str, find, 2));

}*/
