/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:19:26 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/30 01:09:22 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst && new)
	{
	new->next= *lst;
	*lst = new;	
	}
}