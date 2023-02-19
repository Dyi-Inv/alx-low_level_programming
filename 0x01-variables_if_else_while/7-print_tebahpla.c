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
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar ('\n');
	return (0);
}
