#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str [i] != '\0'; i++)
	{
		_putchar(dtr[i]);
	}
	_putchar('\n');
}
