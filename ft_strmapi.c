char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned    int a;
    char    *str;
    a = 0;
    str = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return(NULL);
    ft_strlcpy(str, s, ft_strlen(s));
    while (str[a] != '\0')
    {
        str[a] = f(a, str[a]);
        a++;
    }
    return(str);
} 