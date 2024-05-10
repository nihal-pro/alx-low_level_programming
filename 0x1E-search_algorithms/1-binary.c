#include "search_algos.h"

/**
 * print_array - a function that searches for a value recursively
 * @array: is a pointer to the first element.
 * @left: index left in array.
 * @right: the number of element in array.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left && i <= right)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * recursive - a function that searches for a value recursively
 * @array: is a pointer to the first element.
 * @left: index left in array.
 * @right: the number of element in array.
 * @value: the value to search for.
 * Return: the index where value is located, Otherwise -1.
*/
int recursive(int *array, int value, size_t left, size_t right)
{
	size_t middle;

	if (left == right)
	{
		printf("Searching in array: %d\n", array[left]);
		if (array[left] == value)
			return (left);
		else
			return (-1);
	}
	middle = (left + right) / 2;
	print_array(array, left, right);
	if (array[middle] == value)
	{
		/*printf("\n");*/
		return (middle);
	}
	else if (array[middle] > value)
	{
		if (left == middle)
		{
			return (-1);
		}
		else
		{
			/*printf("\n");*/
			return (recursive(array, value, left, middle - 1));
		}
	}
	else
	{
		/*printf("\n");*/
		return (recursive(array, value, middle + 1, right));
	}
}

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element.
 * @size: the number of element in array.
 * @value: the value to search for.
 * Return: the index where value is located, Otherwise -1.
*/
int binary_search(int *array, size_t size, int value)
{
	if (array && size > 0)
		return (recursive(array, value, 0, size - 1));
	return (-1);
}
