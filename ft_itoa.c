/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:47:59 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/12 23:50:36 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitcounter(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		size;
	long	nb;

	nb = n;
	size = digitcounter(nb);
	res = malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[size] = '\0';
	i = size - 1;
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		res[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
/* int main()
{
	int n = 0500;
	printf("%d",n);
} */
