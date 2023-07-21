#include "main.h"
/**
 * print_diagonal - draws a diagonla lines
 *
 * @n: number of \
 *
 * Return: always 0(success)
 */
void print_diagonal(int n)
{
	int i, m;

	for (i = 0; i < n; i++)
	{
		for (m = 0; m <= i; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
