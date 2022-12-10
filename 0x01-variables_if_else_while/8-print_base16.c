#include <stdio.h>

/**
 * main -lowercase base 16 characters
 *
 * Description: return base 16 characters to lowercase characters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 48)
	{
		if (a < 10)

			putchar(a + '0');
		else if (a > 41)
			putchar(a - 10 + 'A');
		a++;
	}
	putchar(10);

	return (0);
}
