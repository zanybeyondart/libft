/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:17:00 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/16 03:46:11 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	if (!s1)
		return (NULL);
	ft_strlen(s1);
	char *new;
	new = (char*)malloc(ft_strlen(s1) + 1);
	if (!new)
		return (NULL);
	return (new);
}