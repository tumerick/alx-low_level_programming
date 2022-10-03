#include "main.h"
#include <stdlib.h>

/**
 * word_length - counts the length of a given string
 *
 * @str: <string>
 *
 * Return: <int>
 */

int word_length(char *str)
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
 * word_count - counts the number of words 
 * in a string.
 *
 * @str: <string>
 *
 * Return: <int>
 */

int word_count(char *str)
{
	int i, num_words = 0, len = 0;

	while (*str)
		len++;

	while (i++ < len)
	{
		if (s[i] != ' ')
		{
			num_words++;
			i += word_length(str + i);
		}
	}

	return (num_words);
}

/**
 * strtow - splits a string into individual words
 *
 * @str: string to split
 *
 * Return: NULL | pointer to an array of strings
 */

char **strtow(char *str)
{
	char *result;
	int i = 0, idx = 0, 
	    num_words, word,
	    lttrs;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	result = malloc(sizeof(char *) * num_words + 1);

	if (result == NULL)
		return (NULL);

	for (word = 0; word < num_words; word++)
	{
		while (str[idx] == ' ')
			idx++;

		lttrs = word_len(str + idx);

		result[word] = malloc(sizeof(char *) * lttrs + 1);

		if (result[word] == NULL)
			return (NULL);

		for (i = 0; i < lttrs; i++)
			result[word][i] = str[idx++];

		result[word][i] = '\0';
	}

	result[word] = NULL;

	return (result);
}
