#include "main.h"
/**
 * print_last_digit - prints the last digit of a number i
 * @i: the number whose last digit will be printwed
 * Return: the value of the last digit of i
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
	_putchar((i % 10) + '0');
	return (i % 10);
	}
	else if (i < 0)
	{
	_putchar((-i % 10) + '0');
	return (-i % 10);
	}
}
