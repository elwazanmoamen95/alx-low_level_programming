#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: always 0(success)
 */
void print_square(int size)
{
	int i, m;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (m = 1; m <= size; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
