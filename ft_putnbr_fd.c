#include <unistd.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{
	int a = 0;
	if(n >= 10)
	ft_putnbr_fd(n / 10, fd);
	a = n % 10 + '0';
    write(fd, &a, 1);
}

int main()
{
	ft_putnbr_fd(265, 1);
}