/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:19:20 by zvakil            #+#    #+#             */
/*   Updated: 2023/08/06 12:01:48 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int checks(int b, int sign)
{
    int a;
    a = 0;
    if(sign == -1)
    a++;
	if (b == 0)
	return(1);
	if (b == -2147483648)
	return(10);
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
	int		len;
	
	if (n < 0)
	sign = -1;
	else
		sign = 1;
	s = (char*) malloc (sizeof(char) * (checks(n, sign) + 1));
	if(!s)
		return (NULL);
	len = (checks(n, sign));
	s[len--] = '\0';
	if (sign == -1)
		n = n * sign;
	while(len >= 0)
	{
		if (sign == -1 && len == 0)
		{
		s[0] = '-';
		break;
		}
		s[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

// int main()
// {
// 	printf("%s", ft_itoa(-2147483648LL));
// }