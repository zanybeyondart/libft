/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 01:10:07 by zvakil            #+#    #+#             */
/*   Updated: 2023/08/06 14:15:17 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int a;
	a = 0;
	t_list *counter = lst;
	while(counter != NULL)
	{
		counter = lst->next;
		a++;
	}
	return(a);
}