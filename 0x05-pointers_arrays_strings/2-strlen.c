#include "main.h"
/**
 * _strlen - measures the length of a string
 * @s: the string whose length is to be returned
 * Return: length of string s
 *
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
