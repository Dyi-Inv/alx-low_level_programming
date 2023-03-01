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
	unsined int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
