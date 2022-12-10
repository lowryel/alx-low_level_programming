#include <stdio.h>
/**
 * main - reverse function method
 *
 * Description: retrun the reverse of alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);

	return (0);
}
