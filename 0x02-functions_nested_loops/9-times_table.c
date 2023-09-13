#include "main.h"
#include <stdio.h>
/**
 * times_table - fonction
 * times_table: fonction that print 9 time
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
			u = j * i;
		        printf("%d, ", u);
		}
		if (j != 9)
		{
			printf(", ");
		}
		printf("\n");
	}

}
