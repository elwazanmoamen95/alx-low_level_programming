#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 *
 * Return: always 0(success)
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
				n = n % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
