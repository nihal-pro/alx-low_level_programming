#include "main.h"
/**
 * print_alphabet - fonction
 * print_alphabet: fonction that print alphabets in lower case
 * Return: always 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
