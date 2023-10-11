#include "main.h"

/**
 * set_bit - this sets a bit at an index to 1
 * @n: pointer to the number
 * @index: index of the bit to be set to 1
 *
 * Return:returns 1 if successful, otherwise returns -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*b = ((1UL << index) | *b);
	return (1);
}
