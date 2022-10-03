#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - determines the length of a substr
 *
 * @str: <string>
 *
 * Return: <int>
 */
int word_len(char *str)
{
	int idx = 0, len = 0;

	while (str[idx] && str[idx] != ' ')
	{
		len++;
		idx++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words in a string.
 * 
 * @str: <string>
 *
 * Return: <int>
 */
int count_words(char *str)
{
	int idx, word_count = 0, len = 0;

	for (idx = 0; str[idx]; idx++)
		len++;

	for (idx = 0; idx < len; idx++)
	{
		if (str[idx] != ' ')
		{
			word_count++;
			idx += word_len(str + idx);
		}
	}

	return (word_count);
}

/**
 * strtow - splits a string into words.
 * 
 * @str: <string>
 *
 * Return: NULL || pointer to array
 */
char **strtow(char *str)
{
	char **result;
	int idx = 0, word_count, letters, i, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	result = malloc(sizeof(char *) * (word_count + 1));
	
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (i = 0; i < word_count; i++)
	{
		while (str[idx] == ' ')
			idx++;

		letters = word_len(str + idx);

		result[i] = malloc(sizeof(char) * (letters + 1));

		if (result[i] == NULL)
		{
			while (i--)
				free(result[i]);
			free(result);
			return (NULL);
		}

		for (j = 0; j < letters; j++)
			result[i][j] = str[idx++];

		result[i][j] = '\0';
	}
	result[i] = NULL;

	return (result);
}
