#include "main.h"
/**
 * _islower - check for lowercase character
 * @C! the character to be checked
 * Return: 1 for lower case character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else{
	return (0);
	}
}
