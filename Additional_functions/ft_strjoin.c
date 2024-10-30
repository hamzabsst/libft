/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:59:09 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/28 19:45:31 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*res;
	int		i;
	int		j;

	str1 = (char *)s1;
	str2 = (char *)s2;
	res = malloc((ft_strlen(str1) + ft_strlen(str2)) * sizeof(char) + 1);
	if(!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(str1))
	{
		res[i] = str1[i];
		i++;
	}
	while (i < ft_strlen(str1) + ft_strlen(str2))
		res[i++] = str2[j++];
	res[i] = '\0';
	return (res);
}
/*int main()
{
	char *s1 = "hamza ";
	char *s2 = "is him";
	printf("%s", ft_strjoin(s1, s2));
}*/
