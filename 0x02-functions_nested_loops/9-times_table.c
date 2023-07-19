#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 *
 */
void times_table(void)
{
	int a, b, t;
	t = a * b;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 0; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');

				if (t < 10)
					_putchar(' ');

				else
					_putchar((t / 10) + '0');

			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
