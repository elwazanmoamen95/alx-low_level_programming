#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 *
 * Return: always 0(success)
 */

void more_numbers(void)
{
	int row, count;

	for (row = 0; row < 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (ocunt > 9)
			{
				_putchar('1');
				count = count % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
