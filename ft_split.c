#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "libft.h"

int	chk_c(const char *s, char c)
{
	int a;
	a = ft_strlen(s);
	if (s[a -1] == c)
		return(1);
	return(0);
}

char *fun(char *s)
{
	int a = 0;
	char *s2;
	while(s[a] != '\0')
	a++;
	a++;
	s2 = (char*) malloc (sizeof(char) * a);
	ft_strlcpy(s2, s, a);
	return(s2);
}

char	**ft_split(char const *s, char c)
{
	char *s2;
	int len = strlen(s);
	int a = 0;
	int b = 0;
	int d = 0;
	char **result;
	s2 = (char*) malloc (sizeof(char) * (len + 1));
	if (!s2)
	return(NULL);
	ft_strlcpy(s2, s, len + 1);
	while(a < len)
	{
	if (s2[a] == c)
	s2[a] = '\0';
	a++;
	}
	a = 0;
	while(s2[a] == '\0')
	a++;	
	b = a;
	while(b <= len - (chk_c(s, c)))
	{
		if(s2[b] == '\0')
		d++;
		b++;
	}
	result = (char**) malloc (sizeof(char*) * (d));
	if (!result)
	return (NULL);
	b = 0;
	while(a < len)
	{
		result[b] = fun(s2 + a);
		b++;
		while (s2[a] != '\0')
		a++;
		a++;
	}
	return(result);
}

int main()
{
	// ft_split("aazainaaliia" , 'a');
	char *string[] = {ft_split("iizainalivak", 'i')[0],ft_split("iizainalivak", 'i')[1], ft_split("iizainalivak", 'i')[2], ft_split("iizainalivaki", 'i')[3]};
	char **strings = string;
    printf("0 string %s\n1 string %s\n2 string %s\n3 string %s\n", string[0], string[1],string[2],string[3]);	
	// char string0[] = "zain";
	// char string1[] = "ali";
	// char string2[] = "vakil";
	// char *strings[] = {string0, string1, string2};
    // printf("%s\n%s\n%s\n", strings[0], strings[1], strings[2]);
}