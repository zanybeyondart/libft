/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:04:22 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/16 05:22:38 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	a;
	a = 0;
	unsigned char*	j;
	j = (unsigned char*)str;
	while (a < n)
	{
		j[a] = c;
		a++;
	}
	return(j);
}