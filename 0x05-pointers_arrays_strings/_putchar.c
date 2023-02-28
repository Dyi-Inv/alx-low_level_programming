#include "main.h"

/**
 * _putchar - Writes the character c to stdo    ut
 * @c: The character to point
 *
 * Return: On success 1.
 * On errur, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
