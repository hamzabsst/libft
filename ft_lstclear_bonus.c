/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:19:44 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/12 23:51:58 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	while (current)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}
/* void del(void *content)
{
	free(content);
}
int main()
{
	t_list *head = ft_lstnew(ft_strdup("1"));
	t_list *second = ft_lstnew(ft_strdup("2"));
	t_list *third = ft_lstnew(ft_strdup("3"));
	head->next = second;
	second->next = third;

	ft_lstclear(&head, del);

	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
} */
