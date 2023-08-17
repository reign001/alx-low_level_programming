#include "main.h"

/**
 * 0-isupper.c - checks if a letter is uppercase
 * @c: the letter to be checked
 * Return: 1 for uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
		return (0);
}
