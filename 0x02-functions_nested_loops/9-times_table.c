#include "main.h"
/**
 * times_table - prints out times table
 *
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1 ; j <= 9 ; j++)
		{
			r = i * j;
			if (r > 9)
			{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			}
			else if (r <= 9)
			{
			_putchar(' ');
			_putchar((r % 10) + '0');
			}
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
