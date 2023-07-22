#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
char	**ft_split(char const *s, char c)
{
	int a = 0;
	int b = 0;
	int i = 0;
	char **result;
	char *string;
	string = (char*)malloc (sizeof(char));
	result = (char**) malloc (sizeof(char*) * 2);
	while(s[a] != c && s[a] != '\0')
	{
		string[i] = s[a];
		a++;
		i++;
	}
	string[i] = '\0';
	i = 0;
	result[0] = string;
	b++;
	return(result);
}

// int	ft_count(char const *s, char c)
// {
// 	int	i;
// 	int	counter;

// 	i = 0;
// 	counter = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			i++;
// 		else
// 		{
// 			counter++;
// 			while (s[i] != c && s[i] != '\0')
// 				i++;
// 		}
// 	}
// 	return (counter);
// }

// char	*ft_add_word(char const *s, int start, int end)
// {
// 	int		i;
// 	char	*word;

// 	word = malloc((end - start + 1) * sizeof(char));
// 	if (!word)
// 		return (NULL);
// 	i = 0;
// 	while (i < end - start)
// 	{
// 		word[i] = s[start + i];
// 		i++;
// 	}
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		var[3];
// 	char	**result;

// 	if (!s)
// 		return (NULL);
// 	result = malloc((ft_count(s, c) + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	var[0] = 0;
// 	var[1] = 0;
// 	var[2] = 0;
// 	while (s[var[0]] != '\0')
// 	{
// 		if (s[var[0]] != c)
// 		{
// 			var[2] = var[0];
// 			while (s[var[0]] != c && s[var[0]] != '\0')
// 				var[0]++;
// 			result[var[1]++] = ft_add_word(s, var[2], var[0]);
// 		}
// 		else
// 			var[0]++;
// 	}
// 	result[var[1]] = NULL;
// 	return (result);
// }

int main()
{
	char *string[] = {ft_split("zainali", 'i')[0],ft_split("zainali", 'i')[1]};
	// char **strings = string;
    printf("%s\n%s\n", string[0], string[1]);	
	// char string0[] = "zain";
	// char string1[] = "ali";
	// char string2[] = "vakil";
	// char *strings[] = {string0, string1, string2};
    // printf("%s\n%s\n%s\n", strings[0], strings[1], strings[2]);
}