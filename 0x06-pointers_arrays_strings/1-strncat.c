/*
* File: 1-strncat.c
*/

#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination for the coping the bytes to.
 * @src: source of the bytes to copy.
 * @n: number of bytes to copy over.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
