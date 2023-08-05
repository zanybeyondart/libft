#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_mem_l(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	if (len > strlen(s))
		i = strlen(s) - start;
	else
		i = len + 1;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
	
	printf("%s", ft_substr("zainalivakilwhatisthisshit", 50,30));
}