#include "main.h"

/**
 * clear_bit - this  sets the value of particylar bit to 0
 * @n: pointer to the number to change
 * @index: the index of the bit to clear
 *
 * Return: returns 1 if successful, or  -1 if not successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*b = (~(1UL << index) & *b);
	return (1);
}
