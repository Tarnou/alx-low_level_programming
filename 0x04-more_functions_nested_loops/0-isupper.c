#include "main.h"

/**
 * _isupper - checks for uppercase characters.
 *
 * @c: the character to check if they are uppercase
 * Return: our function return (1) if the character is uppercase,
 * otherwise return (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

