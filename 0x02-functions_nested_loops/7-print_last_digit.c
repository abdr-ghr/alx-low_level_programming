#include "main.h"
/**
 * print_last_digit - prints the last digit of a number i
 * @i: the number whose last digit will be printwed
 * Return: the value of the last digit of i
 */
int print_last_digit(int i)
{
	int j;

	if (i >= 0)
	{
	_putchar((j % 10) + '0');
	return (j % 10);
	}
	else if (i < 0)
	{
	_putchar((-j % 10) + '0');
	return (-j % 10);
	}
}
