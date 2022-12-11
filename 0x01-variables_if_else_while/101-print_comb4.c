#include <stdio.h>

/**
 * main - print tripple digit numbers
 *
 * Description: print tripple digit numbers with commas from base ten numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a, c;

	i = 48;
	a = 48;
	c = 48;

	while (i < 58)
	{
		a = i + 1;

		while (a < 58)
		{
			c = a + 1;

			while (c < 58)
			{

				putchar(i);
				putchar(a);
				putchar(c);

				if (i < 55 || a < 56 || c < 57)

				{
					putchar(44);
					putchar(32);
				}
				c++;
			}
			a++;
		}
		i++;

	}
	putchar(10);

	return (0);
}
