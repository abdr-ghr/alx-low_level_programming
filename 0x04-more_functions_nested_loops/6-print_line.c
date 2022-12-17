#include "main.h"
/**
 * print_line - prints  ( - ) n times
 * @n: number of times we print _
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0 ; i < n ; i++)
	{
	-putchar('_');
	}
	_puchar('\n');
	}

}
