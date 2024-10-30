/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:21:35 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/29 21:51:31 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*results;

	results = (void *)malloc(nmemb * size * sizeof(char));
	if (!results)
		return (NULL);
	ft_bzero (results, nmemb * size);
	return (results);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	size_t nmemb = 10;
	size_t size = 6;
	int *arr;
	size_t i = 0;

	arr = (int *)ft_calloc(nmemb, size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return 0;
}*/
