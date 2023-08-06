/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 07:22:03 by zvakil            #+#    #+#             */
/*   Updated: 2023/08/05 23:33:37 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Parameters lst: The node to free.
// del: The address of the function used to delete
// the content.
// Return value None
// External functs. free
// Description Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the n
void	ft_del(void *content)
{
	free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst || !del)
	return 0;
	del(lst->content);
	free(lst);
}

int main()
{
	t_list *zain;
	zain= "zainali";
	ft_lstdelone(zain, ft_del);
	
}