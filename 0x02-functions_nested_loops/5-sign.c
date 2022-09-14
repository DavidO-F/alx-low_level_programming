#include "main.h"

/**
 * print_sign - a function that print the sign of an input numbern
 * @n: number input
 * Return: return 1,-1,0 if n is +ve,-ve,0 number respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
