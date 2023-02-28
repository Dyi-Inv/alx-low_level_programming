#include "main.h"

/**
 * _strlen - returns the length of s string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	wihle (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
