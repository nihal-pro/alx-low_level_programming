#include "main.h"
#include <stdio.h>
/**
 * times_table - fonction
 * times_table: fonction that print time
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, u;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			u = i * j;
		if (j == 0)
		{
			printf("%d, ", u);
		}
		else
		{
			printf("%2d", u);
		if (j != 9)
			printf(", ");
		}
		}
		printf("\n");
	}

}
