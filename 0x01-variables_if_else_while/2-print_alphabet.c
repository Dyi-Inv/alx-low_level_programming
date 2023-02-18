#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghigklmnopqrstuvwxyz";
	int i;

	for (i = 0; i< 26; i++)
	{
		putchar(alp[i]);
				}
	putvhar('\n');
	return (0);
}
