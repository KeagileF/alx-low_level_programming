#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: Pointers to the number to be changed
 * @index: Index of the bit to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
