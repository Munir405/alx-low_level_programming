#include "main.h"
#include <stdlib.h>

/**
 * if_word - count number of words in sting
 * @s: string
 * Return: number of words
 */

int if_word(char *str)
{
	int i, word_len = 0, flag = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_len++;
		}
	}
	return (word_len);
}

/**
 * **strtow - split a string into words
 * @str: string to split
 * Return: pointer to array (success) or NULL (error)
 */

char **strtow(char *str)
{
	int total_words, i, j, length;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);

	/* get total length of words */
	total_words = if_word(str);
	if (total_words == 0)
		return (NULL);
	/* add null byte */
	total_words += 1;

	words = malloc(total_words * sizeof(char *));
	if (words == NULL)
		return (NULL);
	/* iterate through string */
	for (i = 0; *str != '\0' && i < total_words; str++)
	{
		/* if space, countinue count */
		if (*str == ' ')
			;
		else
		{
			/* temporal pointer to point to beginning of found word */
			found_word = str;

			/* length of found word */
			for (length = 0; *str != ' ' && *str != '\0'; length++, str++);
			/* create space for found word */
			words[i] = malloc((length + 1) * sizeof(char));
			if (words[i] == NULL)
				return (NULL);
			/* fill space with found word */
			for (j = 0; *found_word != ' ' && *found_word != '\0'; j++, found_word++)
				words[i][j] = *found_word;
			/* add null byte to word */
			words[i][j] = '\0';
			/* increment pointer for next word */
			i++;
		}
	}
	return (words);
}
