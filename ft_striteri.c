/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:29:34 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/25 18:17:45 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void capitalize(unsigned int i, char *c)
{
	i = 0;
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 32;
}

int main()
{
	char	s[] = "aji l bocal";
	ft_striteri(s, capitalize);
	printf("%s",s);
} */
