#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: the 1st input parameter string
 * @src: the 2nd input parameter string
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
