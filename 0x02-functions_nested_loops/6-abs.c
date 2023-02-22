#include "main.h"
/**
 * _abs - computes value of an integer
 *
 * @a: parameter to be checked
 * Return: a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
