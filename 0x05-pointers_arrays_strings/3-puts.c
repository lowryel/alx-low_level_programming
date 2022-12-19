#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to priny
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	while (str)
	{
		_putcha0r(str[i]);
		i++;
	}
	_putchar('\n');
}
