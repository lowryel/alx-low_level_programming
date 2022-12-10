#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 * main - determine if a number is positive or negative
 *
 * Description: program will assign random number to a
 * variable each it is executed
 *
 * Return: Always 0 (success)
 */


int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
