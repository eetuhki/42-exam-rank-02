
#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i;
	int	word;
	int	wc;
	int	word_len;
	int	start;
	char	**result;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
		{	
			wc++;
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				i++;
		}
	}
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!result)
		return (NULL);
	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
		{
			word_len = 0;
			start = i;
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			{
				i++;
				word_len++;
			}
			result[word] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!result[word])
				return (NULL);
			word_len = 0;
			while (str[start] && str[start] != ' ' && str[start] != '\t' && str[start] != '\n')
			{
				result[word][word_len] = str[start];
				word_len++;
				start++;
			}
			result[word][word_len] = '\0';
			word++;
		}
	}
	result[word] = NULL;
	return (result);
}

/* 
#include <stdio.h>

int	main()
{	
	char test[] = "         one two         three        ";
	char **result;
	int	i;

	result = ft_split(test);
	i = 0;
	while (result[i])
	{
		printf("word: %s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
 */
