#include "main.h"

/**
 * _strlen - returns the length of s string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
