#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	printf("Infinite loop incoming :(\n");

	int i = 0;
	/**
	 * commenting out problematic while loop
	 * while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
