#include <unistd.h>

/**
 * putchar writes characters to the standard output.
 *
 * return on sucess is 1, -1 is return on error.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
