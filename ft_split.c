/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:44:03 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/23 10:44:08 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char *fun(char *s, int len)
{
	char *s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s, len + 1);
	return (s2);
}

char **ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);

	int a = 0;
	int b = 0;
	int d = 0;
	char **result;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			a++;
		else
		{
			d++;
			while (s[a] != c && s[a] != '\0')
				a++;
		}
	}

	result = (char**)malloc(sizeof(char*) * (d + 1));
	if (!result)
		return (NULL);

	a = 0;
	b = 0;
	while (s[a] != '\0' && b < d)
	{
		if (s[a] == c)
			a++;
		else
		{
			int start = a;
			while (s[a] != c && s[a] != '\0')
				a++;
			result[b] = fun((char*)s + start, a - start);
			b++;
		}
	}

	result[b] = NULL;
	return (result);
}



// int main()
// {
// 	int a = 0;
// 	char **test;
// 	test = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
// 	while(test[a++] != NULL)
// 	printf("%s\n", test[a]);
// 	return(0);

// }