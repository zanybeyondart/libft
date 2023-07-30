/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_challenge_for_bigbrains.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:20:14 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/29 19:20:15 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
   char *s3;
   int a = 0;
   int b = 0;
   int c = 0;
   while(s1[a + b] != '\0')
   {
    while(s1[a + b] == set[b])
        b++;
    if(set[b] == '\0')
    {
        printf("if done\n");
        printf(" big loop %d:a , %d :b\n", a , b);
        c = a;
        a = 0;
        s3 = (char*) malloc (sizeof(char) * c + 1);
        while(a < c)
        {
            s3[a] = s1[a];
            a++;
        }
        s3[a] = '\0';
        return(s3);
    }
    b = 0;
    a++;
   }
   return(0);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*result;
// 	size_t	start;
// 	size_t	end;

// 	result = 0;
// 	if (s1 && set)
// 	{
// 		start = 0;
// 		end = strlen(s1);
// 		while (s1[start] && strchr(set, s1[start]))
// 			start++;
// 		while (s1[end - 1] && strchr(set, s1[end - 1]) && end > start)
// 			end--;
// 		result = (char *)malloc(sizeof(char) * (end - start + 1));
// 		if (result)
// 			strlcpy(result, &s1[start], end - start + 1);
// 	}
// 	return (result);
// }

int main()
{
    printf("%s\n", ft_strtrim("zainali", "ali"));
}