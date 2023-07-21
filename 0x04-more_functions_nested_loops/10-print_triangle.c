#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: always 0(success)
 */
void print_triangle(int size)
{
	int i, m, s;

	for (i = 1; i <= size; i++)
	{
		for (m = i; m < size; m++)
		{
			_putchar(' ');
		}
		for (s = i; s > 0; s--)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
