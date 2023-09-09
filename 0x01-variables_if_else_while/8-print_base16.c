#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char hexDigits = "0123456789abcdef";

	for (int i = 0; i < 16; i++)
	{
		putchar(hexDigits[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
