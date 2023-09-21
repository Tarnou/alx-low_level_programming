#include "main.h"
#include <ctype.h>
/**
 * str_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 */
void str_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{

			*str = *str - 'a' + 'A';
		}
		str++;
	}
}
