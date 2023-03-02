/*
   *File: 100-rot13.c
 */

#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *
 */

void 
{
	unsigned int size = n;

	int digits = 0;

	int i;

	if (n < 0)
		size = -n;
	if (n == 0)
		digits = 1;

	while (size >= 1)
	{
		size = size / 10;
		digits++;
	}

	for (i = 0; i < digits; i++)
	{

		int pow = 1;

		int
