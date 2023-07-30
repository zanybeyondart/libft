/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:19:08 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/29 19:19:09 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *node;
	node = malloc(sizeof(t_list));
	if (!node)
	return NULL;
	node->content = content;
	node->next = NULL;
	return(node);
}

int main()
{
	ft_lstnew("zainali");

}