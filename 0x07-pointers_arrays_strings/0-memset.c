#include "main.h"
/**
 * _memset - Fill a memory block with a specified byte value.
 *
 * @s: A pointer to the memory block to be filled.
 * @b: The byte value to fill the memory block with.
 * @n: The number of bytes to fill with the byte value @b.
 *
 * Return: A pointer to the modified memory block @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
