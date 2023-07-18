#include"main.h"

/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i, alpha;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
