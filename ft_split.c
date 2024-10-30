/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:08:13 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/30 14:46:12 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Determine the Number of Substrings
// Allocate Memory for the Array of Strings
// Extract Each Substring
// Allocate and Copy the Substring
// Store the Pointer in the Array
// Add a NULL Pointer at the End
// Free Memory on Allocation Failure
int	sepcounter(const char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	return (counter);
}
int	strcounter(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if(s[i] != c && (s[i - 1] == c || i == 0))
			counter++;
		i++;
	}
	return (counter);
}
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;

	size = ftstrlen(s) - sepcounter(s, c);

	res = malloc(size * (strcounter(s, c) + 1));
	if (!res)
		return (NULL);

}
// int main()
// {
// 	printf("%d", strcounter(" hamza  is   ", 32));
// }
