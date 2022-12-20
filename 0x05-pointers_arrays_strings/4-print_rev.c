#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed out in reverse
 */
void print_rev(char *s)
{
	int cntr = 0;

	while (s[cntr] != '\0')
	{
		cntr++;
	}
	for (cntr = cntr - 1 ; i >= 0 ; i--)
	{
		_putchar(s[cntr]);
	}
	_putchar('\n');
}
