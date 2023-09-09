#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
int main(void)
{
	int i = 0, j = i;

	while (i <= 8)
	{

		while (j <= 9)
		{
			if (i != o && i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
