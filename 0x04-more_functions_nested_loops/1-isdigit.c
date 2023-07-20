#include "main.h"

/**
 * _isdigit - check if c is upper
 *
 * @c: input for digit
 *
 * Return: 1 if its digit, o if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
