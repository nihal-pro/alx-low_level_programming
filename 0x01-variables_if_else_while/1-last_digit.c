#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with print function
 * Return: always 0
 */
int main(void)
{
	unsigned long int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is greater than 5\n", n);
	if (n == 0)
		printf("Last digit of %d is zero\n", n);
	if (n < 6 && n != 0)
		printf("Last digit of %d is less than 6 and not 0\n", n);
	return (0);
}
