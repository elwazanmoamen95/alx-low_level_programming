#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 *
 * Return: always 0(success)
 */

void more_numbers(void)
{
	int i, m, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			m = n;
			if (n > 9)
			{
				_putchar('1');
				m = n % 10;
			}
			_putchar(m + 48);
		}
		_putchar('\n');
	}
}
