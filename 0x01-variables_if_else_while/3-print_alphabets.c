#include <stdio.h>

/**
 * main - lowercase and uppercase alphabets
 *
 * Description: return lowercase and uppercase alphabets
 *
 * Return: Always 0 (success)
 */

int main(){

	int i = 97, a=65;


	while (i < 123)

	{

		putchar(i);
		i++;

	}

	while (a<91)

	{
		putchar(a);
		a++;
	}

	putchar(10);
	return (0);

}


