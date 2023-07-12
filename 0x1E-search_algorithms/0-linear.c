/*
 * file: 0-linear.c
 */
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *              using the Linear search algorithm
 * @array:  A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return:  return the first index where value is located
 *	If value is not present in array or if array is NULL, returns -1
 * Description: Every time it compares a value in the array to the value,
 *			it prints this value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
return (-1);
}
