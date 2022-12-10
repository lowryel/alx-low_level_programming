#include <stdio.h>

/**
 * main - exclude (e and q)
 *
 * Description: lowercase alphabets excluding e and q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}
