#include "main.h"
/**
 *print_sign - prints sign of a number
 *@n: character to be printed
 *Return: 1 and print + if n is greater than 0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar("+");
	}
	else if (n == 0)
	{
		return (0);
		_putchar("0");
	}
	else
	{
		return (-1);
		_putchar("0");
	}
}
