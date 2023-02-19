/*
* File: 7-print_tebahpla.c
* Auth: LAZAR
*/

#include <stdio.h>

/**
 * main - Prints
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	putchar ('\n');
	return (0);
}
