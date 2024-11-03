/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:47:59 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/02 20:38:55 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitcounter(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		size;

	size = digitcounter(n);
	res = malloc(size * sizeof(char) + 1);
	if (!res)
		return (NULL);
	res[size] = '\0';
	i = size - 1;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
			return ("-2147483648");
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
/* int main()
{
	int n = 0500;
	printf("%d",n);
} */
