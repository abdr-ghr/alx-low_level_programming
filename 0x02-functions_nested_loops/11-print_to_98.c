#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers starting from n to 98
 * @n: holds the value that we're counting down from or up to
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n ; i <= 98 ; i++)
	{
	printf("%d", i);
	if (i < 98)
	{
	printf(", ");
	}
	}
	}
	else
	{
	for (i = n ; i >= 98 ; i--)
	{
	printf("%d", i);
	if (i > 98)
	{
	printf(", ");
	}
	}
	}
	printf('\n');
}
