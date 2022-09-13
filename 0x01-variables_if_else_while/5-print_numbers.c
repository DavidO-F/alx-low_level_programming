#include <stdio.h>

/**
 * main - Entry point
 * Description: the code print an output result of +ve or -ve or zero
 * Return: returns zero
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
