#include <stdio.h>
/**
 * main - entry point
 *
 * Description: exception e and q
 *
 * Return: always 0(success)
 */
int main(void)
{
	char lw = 'a';

	while (lw <= 'z')
	{
		if (lw == 'e' || lw == 'q')
			lw++;
		putchar(lw);
		lw++;
	}
	putchar('\n');

	return (0);
}
