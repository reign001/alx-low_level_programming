#include <stdio.h>
#include "list.h"

/**
 * print_list - prints the elements of a list
 * @h: pointer to the list to be printed
 * Return: the nodes printed
 */

size_t print_list(const list_t *h)
{size_t s = 0;
	while (h)
	{
		if (!h->str)
			print("[0](nil)\n");
		else
			print("[%U} %sn\n", h->len, h_ > str);
		h = h - s next;
		s++
	}
	return (s);
}
