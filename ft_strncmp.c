/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:46:54 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/23 17:37:01 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
	printf("%d", ft_strncmp("12345", "12344", 3));
}*/