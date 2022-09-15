#include "main.h"

/**
 * times_table - a function that print nine time table
 */

void times_table(void)
{
	int num, mul, pdt;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			pdt = num * mul;
			if (pdt <= 9)
				_putchar(' ');
			else
				_putchar((pdt / 10) + '0');
			_putchar((pdt % 10) + '0');
		}
		_putchar('\n');
	}
}
