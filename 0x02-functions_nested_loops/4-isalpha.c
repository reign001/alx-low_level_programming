#include "main.h"
/**
 *_isalpha - check for uppercase character
 *@c: the character to be checked
 *Return: 1 if c is a lowercase or uppercase character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
