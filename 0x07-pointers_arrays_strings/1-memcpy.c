#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memory area
 * @n: Number of bytes to copy
 *
 * Description: This function copies 'n' bytes from the 'src' memory area
 * to the 'dest' memory area.
 *
 * Return: Pointer to 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
