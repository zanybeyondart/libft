/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:20:01 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/29 19:20:02 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
char    *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;
    int a;
    a = strlen(s1) + strlen(s2);
    int b;
    b = 0;
    int c;
    c = 0;
    s3 = (char*) malloc ((a + 1) * sizeof(char));
    while(s1[c] != '\0')
        s3[b++] = s1[c++];
    c = 0;
    while(s2[c] != '\0')
    s3[b++] = s2[c++];
    s3[b] = '\0';
    return(s3);
}

int main()
{
    printf("%s\n", ft_strjoin("zain", "ali"));
}