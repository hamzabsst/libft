/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:21:35 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/31 11:00:08 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*results;

	results = malloc(nmemb * size);
	if (!results)
		return (NULL);
	ft_bzero(results, nmemb * size);
	return (results);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	size_t nmemb = 10;
	size_t size = sizeof(int);
	int *arr;
	size_t i = 0;

	arr = (int *)ft_calloc(nmemb, size);
	while (i < nmemb)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return 0;
}*/
/* 	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL); */
