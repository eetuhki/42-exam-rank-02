
#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**result;
	int		word_count = 0;
	int		i = 0;
	int		j;

	// Count words
	while (str[i])
	{
		// Skip whitespaces
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		
		// If we found a word
		if (str[i])
		{
			word_count++;
			// Skip to end of word
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				i++;
		}
	}

	// Allocate memory for result array
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	// Reset for second pass
	i = 0;
	j = 0;

	// Copy words
	while (str[i])
	{
		// Skip whitespaces
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		
		// If we found a word
		if (str[i])
		{
			int word_len = 0;
			int start = i;

			// Measure word length
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			{
				word_len++;
				i++;
			}

			// Allocate and copy word
			result[j] = (char *)malloc((word_len + 1) * sizeof(char));
			if (!result[j])
			{
				// Free previously allocated memory
				while (j > 0)
				{
					j--;
					free(result[j]);
				}
				free(result);
				return (NULL);
			}

			// Copy word
			word_len = 0;
			while (str[start] && str[start] != ' ' && str[start] != '\t' && str[start] != '\n')
			{
				result[j][word_len] = str[start];
				word_len++;
				start++;
			}
			result[j][word_len] = '\0';
			j++;
		}
	}

	// Null terminate the array
	result[j] = NULL;

	return (result);
}
