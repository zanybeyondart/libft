/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:21:54 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/30 13:44:32 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*list;
	if(!f || !lst)
	return (NULL);
	list = NULL;
	while(!lst)
	{
		node = ft_lstnew(lst->content);
		if (*list == NULL)
			list = node;
		else
			list = ft_lstadd_back(&list, node);
		lst = lst->new;
	}
	ft_lstclear(&lst, del);
	return(list);
}