#include "main.h"
/**
 * _abs - function that will compute absolute
 *			value of an integer
 *
 * @n: type for function
 *
 * Return:  return always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
