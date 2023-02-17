#include <stdio.h>
/**
 * main - main block
 * Desription - Print the alphabet in lower case
 * and then in uppercase, follwed by a new line
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
