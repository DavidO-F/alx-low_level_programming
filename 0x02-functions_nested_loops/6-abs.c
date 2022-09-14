#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: number input
 * Return: 0
 */

int  _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
