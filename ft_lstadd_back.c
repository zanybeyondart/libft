/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 07:11:30 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/30 07:21:01 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	
	if (!lst)
		*lst = new;
	else
	{
		node = ft_lstlast(*(lst));
		node->next = new;
	}
}