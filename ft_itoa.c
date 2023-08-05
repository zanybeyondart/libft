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

#include "libft.h"

int checks(int b, int sign)
{
    int a;
    a = 0;
    if(sign == -1)
    a++;
    while (b != 0)
    {
        b = b / 10;
        a++;
    }
    return(a);
}

char    *ft_itoa(int n)
{
	int		sign;
	char	*s;

	if (n < 0)
	sign = -1;
	else
		sign = 1;
	s = (char*) malloc (sizeof(char) * (checks(n, sign) + 1));
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
	return (s);
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