#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10X the alphabet 
 * followed by new line.
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
		_putchar('\n');
	}
}
