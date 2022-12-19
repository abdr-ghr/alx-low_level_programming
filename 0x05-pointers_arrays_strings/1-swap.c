#include "main.h"
/**
 * swap_int - swaps the values of a and b
 * @a: first value
 * @b: second vaue
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
