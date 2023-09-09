#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char o = 'a';

	while (i <= '9')
	{
		putchar(i + '0');
		i++;
	}
	while (o <= 'f')
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
