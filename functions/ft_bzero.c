/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:44:32 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/27 10:20:22 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		*ptr = 0;
		i++;
	}
}
/*int main ()
{
	char str[15] = "hamza is trying";
	ft_bzero(str + 2, 2*sizeof(char));
	printf("%s\n", str);
}*/
