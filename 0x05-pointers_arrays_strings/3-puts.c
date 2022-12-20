#include "main.h"
/**
 * _puts - prints out a string
 * @str: the string that will be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
