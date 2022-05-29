#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum of the range
 * @max: the max number in the range
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
