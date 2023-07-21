#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
   char *s3;
   int a = 0;
   int b = 0;
   int c = 0;
   while(s1[a + b] != '\0')
   {
    while(s1[a + b] == set[b] && set[b] != '\0')
        b++;
    if(set[b] == '\0')
    {
        c = a;
        a = 0;
        s3 = (char*) malloc (sizeof(char) * c + 1);
        while(a < c)
        {
            s3[a] = s1[a];
            a++;
        }
        s3[a] = '\0';
        return(s3);
    }
    b = 0;
    a++;
   }
   return((char*)s1);
}

// char	*ft_strtrim2(char const *s1, char const *set)
// {
// 	char	*result;
// 	size_t	start;
// 	size_t	end;

// 	result = 0;
// 	if (s1 && set)
// 	{
// 		start = 0;
// 		end = strlen(s1);
// 		while (s1[start] && strchr(set, s1[start]))
// 			start++;
// 		while (s1[end - 1] && strchr(set, s1[end - 1]) && end > start)
// 			end--;
// 		result = (char *)malloc(sizeof(char) * (end - start + 1));
// 		if (result)
// 			strlcpy(result, &s1[start], end - start + 1);
// 	}
// 	return (result);
// }

int main()
{
    printf("%s\n", ft_strtrim("zainali", "inali"));
    printf("%s\n", ft_strtrim2("zainali", "inali"));
}