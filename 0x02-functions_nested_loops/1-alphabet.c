#include "main.h"
/**
 * main - entry point
 * description: A C program that print with putchar function
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
