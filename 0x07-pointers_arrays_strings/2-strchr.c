#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search
 * @c: The character to locate
 *
 * Description: This function searches for the first occurrence of the
 * character 'c' in the string 's'.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
