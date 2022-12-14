#include "main.h"

/**
 * print_alphabet_x10 - 10x alphabets
 *
 * Description: return the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{

			_putchar(ch);
			ch++;
		}

		alphabet_count++;
		_putchar('\n');
	}
}
