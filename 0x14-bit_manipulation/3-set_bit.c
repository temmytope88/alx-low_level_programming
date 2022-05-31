#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of the bit to 1 at a given index
 * @n: pointer to binary number
 * @index: given index of number
 * Return: 1 for success, -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
		return (-1);
	*n = (*n | (1 << index));
	return (1);

}
