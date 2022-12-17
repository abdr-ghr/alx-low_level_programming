#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints digits from 0 to 9
 * Return: no return
 */
void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
		_putchar(i);

	_putchar('\n');
}
