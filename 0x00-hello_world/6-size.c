#include <stdio.h>

/**
 * main - this is our function
 *
 * Return: our return is (0)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu bytes\n", sizeof(c));
	printf("Size of a int: %zu bytes\n", sizeof(i));
	printf("Size of a long int: %zu bytes\n", sizeof(li));
	printf("Size of a long long int: %zu bytes\n", sizeof(lli));
	printf("Size of a float: %zu bytes\n", sizeof(f));
	return (0);
}

