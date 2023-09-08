#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char i = 'a';
	char x = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
