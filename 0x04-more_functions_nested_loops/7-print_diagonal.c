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
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
