/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:19:50 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/12 11:51:28 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* void rot1(void *str)
{
	char *s = (char *)str;
	while (*s)
	{
		*s = *s + 1;
		s++;
	}
}
int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("lol"));
	t_list *node2 = ft_lstnew(ft_strdup("is"));
	t_list *node3 = ft_lstnew(ft_strdup("lol"));
	node1->next = node2;
	node2->next = node3;

	ft_lstiter(node1, &rot1);

	t_list *current = node1;
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
		}
		ft_lstclear(&node1, free);
} */
