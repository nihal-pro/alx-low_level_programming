#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int o, p;

	while (i <= 9)
	{
	o = 0;
	while (o <= 9)
	{
	p = 0;
	while (p <= 9)
	{
	if (i != o && i < o && o != p && o < p)
	{
	putchar((i % 10) + '0');
	putchar((o % 10) + '0');
	putchar((p % 10) + '0');

	if (i + o + p != 24)
	{
	putchar(',');
	putchar(' ');
	}
	}
	p++;
	}
	o++;
	}
	i++;
	}
	putchar('\n');

	return (0);
}
