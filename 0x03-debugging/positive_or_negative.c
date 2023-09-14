#include "main.h"
/**
  * positive_or_negative - Checks if number is positif or negatif
  *@i: The integer to be checked
  *
  */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
}
