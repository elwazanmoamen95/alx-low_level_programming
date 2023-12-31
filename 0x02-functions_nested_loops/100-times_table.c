#include "main.h"
/**
 * print_times_table - prints n times table
 *
 * @n: integer
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				c = a * b;
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (c < 100 && c > 9)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
				}
				if (c > 99)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
				}
				_putchar((c % 10) + '0');

			}
			_putchar('\n');
		}
	}
}
