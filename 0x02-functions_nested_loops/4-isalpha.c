#include "main.h"

/**
 * _isalpha - a function that check for alphabet letter
 * @c: single letter input
 * Return: return 1 if c is a letter, else return 0
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
