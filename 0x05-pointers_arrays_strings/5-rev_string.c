#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char ch = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0 ; i < j ; i++)
	{
		j--;
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}
