#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int a;
    a = start;
    int b = 0;
    char *temp;
    temp = (char *)malloc((len + 1) * sizeof(char));
    while (a < (start + len))
    {
        temp[b] = s[a];
        a++;
        b++;
    }
    temp[b] = '\0';
    return (temp);
}

size_t	ft_mem_l(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	if (len > strlen(s))
		i = strlen(s) - start;
	else
		i = len + 1;
	return (i);
}

char	*ft_substr_2(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	if (start > strlen(s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * ft_mem_l(s, start, len));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
    printf("%s\n", ft_substr_2("Zainali", 0, 9));
    printf("%s\n", ft_substr("Zainali", 0, 9));
}