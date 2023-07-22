/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 06:04:49 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/16 19:30:06 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a = ft_strlen(dst);
	size_t	b = 0;
	if(size > 0 && a > size)
	{
	while(a < (size-1) && src[b] != '\0')
		{
			if(src[b] != '\0')
			dst[a] = src[b];
			a++;
			b++;
		}
	}
	dst[a] = '\0';
	return((ft_strlen(dst) + ft_strlen(src)));
}

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i[4];

	i[0] = ft_strlen(dst);
	i[1] = ft_strlen(src);
	i[2] = ft_strlen(dst) + ft_strlen(src);
	i[3] = 0;
	if (!dstsize)
		return (i[1]);
	if (i[0] > dstsize)
		return (dstsize + i[1]);
	while (src[i[3]] && i[0] < dstsize - 1)
		dst[i[0]++] = src[i[3]++];
	dst[i[0]] = '\0';
	return (i[2]);
}