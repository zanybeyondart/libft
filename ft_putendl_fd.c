void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(1, '\n', 1);
}