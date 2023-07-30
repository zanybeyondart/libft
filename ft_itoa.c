/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:19:20 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/29 19:19:21 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_itoa(int n)
{
	int		a;
	int		b;
	int		sign;
	char	*s;
	
	a = 0;
	sign = 1;
	b = n;
	if(n < 0)
	{
	sign = -1;
	a = 1;
	}
	while (b != 0)
    {
        b = b / 10;
        a++;
    }
	s = (char*) malloc (sizeof(char) * (a + 1));
	if(!s)
		return (NULL);
	s[a] = '\0';
	if (sign == -1)
	{
		s[0] = '-';
		n = n * sign;
	}
	while(n != 0)
	{
		s[--a] = (n % 10) + '0';
		n = n / 10;
	}  
    return(s);
}

int main()
{
	printf("%s\n", ft_itoa(28688)); // Don't forget to free the memory allocated by malloc.
	return 0;
}

// int main()
// {
//     printf("%s\n", ft_itoa(286));
// }