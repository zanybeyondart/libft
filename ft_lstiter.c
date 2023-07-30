/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:18:23 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/30 09:21:08 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Parameters lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
Return value None
External functs. None
Description Iterates the list ’lst’ and applies the function
’f’ on the content of each node.



void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while(!lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}