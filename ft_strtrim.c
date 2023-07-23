/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:53:43 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/23 10:44:39 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// char	*ft_strtrim(char const *s1, char const *set)
// {
//    char *s3;
//    int a = 0;
//    int b;
//    int c = 0;
//    while(s1[a] != '\0')
//    {
// 	b = 0;
//     while (set[b] != '\0')
//     {
//      if(set[b] == s1[a])
// 	 {
		
// 	 }   
//     }
//    }
// 	return((char*)s1);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	a;
	size_t	b;

	str = 0;
	if (s1 && set)
	{
		a = 0;
		b = ft_strlen(s1);
		while (s1[a] && ft_strchr(set, s1[a]))
			a++;
		while (s1[b - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		result = (char *)malloc(sizeof(char) * (end - start + 1));
		if (result)
			ft_strlcpy(result, &s1[start], end - start + 1);
	}
	return (result);
}

// int main()
// {
//     printf("%s\n", ft_strtrim("zainali", "ainali"));

