/*
 * File: 9-print_comb.c
 * Auth: LAZAR
 */

#include <stdio.h>

/** 
 * main - Prints all posible combinations dingle digit numbers.
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar((num % 10) + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	
	putchar('\n');
	return (0);
}
