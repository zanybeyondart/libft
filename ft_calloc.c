/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:32:27 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/16 05:31:56 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	a;
	a = 0;
	size_t *ptr = NULL;
	while(a < count)
	{
		ptr[a] = (size_t)malloc(size);
		ptr[a] = 0;
		a++;
	}
	if (!ptr)
		return (NULL);
	else
		return (ptr);
}