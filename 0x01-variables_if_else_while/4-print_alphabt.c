#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char i = 48;

	while (i <= 57)
	{
		if (i == 'q' || i == 'e')
			i++;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
