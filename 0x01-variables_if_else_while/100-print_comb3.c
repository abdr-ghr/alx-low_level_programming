#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 58 ; i++)
	{
	for (j = i + 1 ; j < 58 ; j++)
	{
	putchar(i);
	putchar(j);
	if (i != 56)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
