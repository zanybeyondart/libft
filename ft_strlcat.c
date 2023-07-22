/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 06:04:49 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/22 11:48:28 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a = ft_strlen(dst);
	size_t	c = ft_strlen(dst);
	size_t	b = 0;
	if (size == 0)
	return (ft_strlen(src));
	if (a > size)
	return (size + ft_strlen(src));
	if(size > 0)
	{
	while(a < (size-1) && src[b] != '\0')
		{
			if(src[b] != '\0')
			dst[a] = src[b];
			a++;
			b++;
		}
		dst[a] = '\0';
	}
	return(c + ft_strlen(src));
}
