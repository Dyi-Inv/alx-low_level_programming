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
	int x;
	int y;

	x = 0;

	while (dest[x] != 0)
	{
		x++;
	}

	y = 0;

	while (src[y] != 0)
	{
		dest[y] = src[y];
		x++;
		y++;
	}

	return (dest);
}
