#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing acceptable characters
 *
 * Description: This function calculates the length of the prefix substring
 * in 's' consisting of characters that are present in the 'accept' string.
 *
 * Return: The number of bytes in the initial segment of 's' that match
 * any character from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (!match)
		{
			break;
		}
		s++;
	}

	return (count);
}
