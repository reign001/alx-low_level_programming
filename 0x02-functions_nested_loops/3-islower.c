#include "main.h"
/**
 * _islower - check for lowercase character
 * @c| the alphabet to be checked
 * Return: 1 for lower case character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 100)
	{
	return (1);
	}
	return (0);
}
