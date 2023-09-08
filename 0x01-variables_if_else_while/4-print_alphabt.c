#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z' && i != 'q' && i != 'e')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
