#include "main.h"
/**
 * _isdigit - checks if c is a digit between 0 and 9
 * @c: the digit we check
 * Return: 1 if c is a digit and 9 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return(0);
}
