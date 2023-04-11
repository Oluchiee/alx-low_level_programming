#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);

	return (1);
}
