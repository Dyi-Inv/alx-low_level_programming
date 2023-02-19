/*
* File: 6-print_numberz.c
* Auth: LAZAR
*/

#include <stdio.h>
/**
* main - Prints from digit num of base 10, printf, (puts, etc... are forbidden)
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	for (i = 0 ; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	putchar("\n");

return (0);
}
