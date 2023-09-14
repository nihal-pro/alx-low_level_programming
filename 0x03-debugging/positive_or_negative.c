#include "main.h"
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
}
