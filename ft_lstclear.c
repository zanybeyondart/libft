/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:03:29 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/30 09:16:13 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
// Return value None
// External functs. free
// Description Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	
	if (lst == NULL)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = node;
	}
}