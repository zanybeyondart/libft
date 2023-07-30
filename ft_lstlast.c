/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 07:07:36 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/30 07:10:40 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
	return 0;
	t_list *counter;
	counter = lst:
	while(counter -> next != NULL)
	counter = counter->next;
	return(counter);
}