#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
