#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l_D;
	l_D = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (l_D >5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_D);
	else
		if (l_D ==0)
			printf("Last digit of %d is %d and is 0\n", n, l_D);
		else
			if (l_D<6 && l_D#0)
				printf("Last digit of%d\n",n,"is%d\n",l_D,"and is less than 6 and not 0 \n");
	return (0);
