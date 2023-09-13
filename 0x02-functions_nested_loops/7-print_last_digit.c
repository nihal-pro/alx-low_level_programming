#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int c;

	c = n % 10;

	if (c < 0)
	{

		c = c * -1;

		return (c);
	}

	_putchar(c + '0');

	return (c);
}
