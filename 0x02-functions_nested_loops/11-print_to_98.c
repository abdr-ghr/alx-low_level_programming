#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers starting from n to 98
 * @i: holds the value of n
 */
void print_to_98(int n)
{
	int i;

	for (i = n ; i <= 98 ; i++)
	{
	printf("%d", i);
	if (i < 98)
	{
	printf(", ");
	}
	}
}
