#include "main.h"
/**
 * _sqrt_recursion - ss
 * square - df
 *
 * @n: number
 * @val: n2
 *
 * Retuen: void
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - df
 *
 * @n: l
 * @val: d
 *
 * Return: void
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
