#include "main.h"

/**
 * swap_int - swap two int values
 *
 * @a: integer to swap
 *
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
