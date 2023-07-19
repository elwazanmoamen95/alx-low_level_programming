#include "main.h"
/**
 * print_sign - function that will print sign of n
 *
 * @n: checks input of function
 *
 * Return: return 1 if n is greater than zero
 *	   return 0 if n is zero
 *	   otherwise (-1)
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
}
