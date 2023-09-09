#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char hexDigits = "0123456789abcdef";

	while (i < 16)
	{
		putchar(hexDigits[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
