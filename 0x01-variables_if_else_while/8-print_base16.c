/*
 * File: 8-print_base16.c
 * Auth: LAZAR
 */

#include <stdio.h>

/**
 * main - Prints all Hexadicimal numbers in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (l = 'a'; l<= 'f'; l++)
	{
	}

	putchar('\n');
	return (0);
}
