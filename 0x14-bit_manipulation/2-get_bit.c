#include "main.h"

/**
 * get_bit - this  returns value of a bit at a particular index in a decimal number
 * @n: number to search
 * @index: the index number of the bit
 *
 * Return: this returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
