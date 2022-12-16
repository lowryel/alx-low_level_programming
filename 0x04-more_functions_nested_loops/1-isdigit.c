#include "main.h"
#include <stdio.h>

/**
 * _isdigit - return numbers form 0 to 9
 *
 * @c: paramter to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
