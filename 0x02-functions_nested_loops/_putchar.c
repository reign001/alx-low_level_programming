#include "main.h"
#include <unistd.h>
/**
 * _putchar write the character c to standard output
 *@c: the character to be printed
 *Return: (DONE)
 *if error, return -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
