/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:43:23 by hbousset          #+#    #+#             */
/*   Updated: 2024/11/13 15:23:18 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/* void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}
void	del_content(void *content)
{
	free(content);
}

int main()
{
	t_list *lst = ft_lstnew(ft_strdup("ana"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("nta")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("sir")));

	t_list *new_lst = ft_lstmap(lst, duplicate_content, del_content);
	t_list *current = new_lst;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&lst, del_content);
	ft_lstclear(&new_lst, del_content);
} */
