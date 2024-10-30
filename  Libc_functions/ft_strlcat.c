/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:17:35 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/27 13:41:34 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*s;
	int		dst_len;
	int		src_len;

	s = (char *)src;
	if (!src || !dst)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size)
		return (src_len + size);
	if (size == 0)
		return (src_len);
	while (s[i] && size + dst_len - 1 - i < 0)
	{
		dst[dst_len + i] = s[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*int main()
{
	char dst[] = "hamza";
	char src[] = "me";
	int c = ft_strlcat(dst, src, 3);
	printf("%d", c);
}*/
