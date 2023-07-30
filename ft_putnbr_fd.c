/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:19:51 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/29 19:19:52 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{
	int a = 0;
	int sign;
	if (n < 0)
	{
	write(1, "-", 1);
	n *= -1;
	}
	if(n >= 10)
	ft_putnbr_fd(n / 10, fd);
	a = n % 10 + '0';
    write(fd, &a, 1);
}

int main()
{
	ft_putnbr_fd(-200265, 1);
}