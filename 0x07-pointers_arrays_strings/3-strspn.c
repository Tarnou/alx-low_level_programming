#include <stddef.h>
#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing characters to be matched.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccepted[256] = {0}; /* Initialize an array to keep
				    *track of accepted characters
				    */

	/* Populate the isAccepted array with accepted characters */
	while (*accept)
	{
		isAccepted[(unsigned char)*accept] = 1;
		accept++;
	}

	/* Count the number of characters at the beginning of s that are in accept */
	while (*s && isAccepted[(unsigned char)*s])
	{
		count++;
		s++;
	}

	return (count);
}
