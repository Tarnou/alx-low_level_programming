#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 * on the number of bytes to copy.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)

{
	char *result = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;

	}


	*dest = '\0';

	return (result);
}

