#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the entry point of our program.
 *
 * our function has no commandline argument and return an interger.
 * Return: our progran return (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	int L = n % 10;
		
printf("Last digit of %d is %d and is ", n, L);

if (L > 5)
{
printf("and is greater than 5\n");
}
else if (L == 0)
{
printf("and is 0\n");
}
else 
{
printf("and is less than 6 and not 0\n");
}


return (0);
}
