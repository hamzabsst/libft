/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:19:59 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/12 23:51:20 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
/* int main()
{
	t_list *node1 = ft_lstnew("hamza");
	t_list *node2 = ft_lstnew("is");
	t_list *node3 = ft_lstnew("him");
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%d", ft_lstsize(node1));
} */
