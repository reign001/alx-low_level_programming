#include "main.h"

/**
 * int _isdigit - checks if a digit is between 0 through 9
 * @c: character to be checked
 * Return: 1 if c is digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
