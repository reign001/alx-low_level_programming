#include" main.h"
#include <unistd.h>
/**
 * _putchar - this writes the character c to the stdout
 * @c: character to printed
 *
 * Return: On success 1.
 * On error, NULL is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
