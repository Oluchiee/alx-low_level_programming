#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j;
	char *e;

	j = 1;
	e = (char *) &j;

	return ((int)*e);
}
