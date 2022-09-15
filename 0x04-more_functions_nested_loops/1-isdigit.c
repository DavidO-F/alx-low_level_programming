#include "main.h"

/**
 * _isdigit - check weather a number passed as an argument is a digit
 * @c: argument to be check
 * Return: returns 1 if is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
