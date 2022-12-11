#include <stdio.h>

/**
 * main - print different combinations of two digit numbers
 *
 * Description: print different combinations of two digit numbers with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a;

	i = 48;
	a = 48;

	while (i < 58)
	{
		a = i + 1;
		while (a < 58)
		{
			putchar(i);
			putchar(a);

			if (i != 56 || a != 57)
			{
				putchar(44);
				putchar(32);
			}
			a++;
		}
		i++;

	}

	putchar(10);

	return (0);
}

