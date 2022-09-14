#include "main.h"

/**
 * _islower - afunction that checks for a lowercase letter between a-z
 * @c: single letter input
 * Return: returns one or zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
