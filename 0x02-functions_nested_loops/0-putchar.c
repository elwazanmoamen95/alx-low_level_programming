#include "main.h"
/**
 * main - entry point
 *
 * Description: pritn _putchar
 *
 * Return: always 0(success)
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
