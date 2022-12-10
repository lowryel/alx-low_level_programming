#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - determine the last digit of a random number
 *
 * Description: determine if the last digit os a random number is
 * greater than or less than a range
 *
 * Return: Always 0 (success)
 */
 

int main(void)

{

	int n, last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last = n%10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is equal to 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
