#include "main.h"
/**
 * print_sign - prints the sign of int n
 * @n: the number whose sign is to be printed
 * Return: -1 if n is negative, 1 if n is positive and 0 is n is zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('+');
	return (1);
	}
}
