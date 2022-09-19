#include <stdio.h>

/**
 * main - Prints 16 letters
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	       putchar(n);
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
