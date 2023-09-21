#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}


	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}

