/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:40:19 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/27 10:22:56 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}
/*int main()
{
	char str[15] = "hamza is fuunny";
    //memset(str + 2, '.', 8*sizeof(char));
	ft_memset(str + 2, '.', 8*sizeof(char));
    printf("%s", str);
}*/
