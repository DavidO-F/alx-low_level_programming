#include "main.h"

/**
 * print_alphabet - a function that prints alphabet in lowercase letter
 * Return zero
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
