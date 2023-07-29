void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned    a;
    a = 0;

    while(s[a] != '\0')
    {
        s[a] = f(a, &s[a]);
        a++
    }
}