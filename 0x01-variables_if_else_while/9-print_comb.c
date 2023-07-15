#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a5r task w nngz
 *
 * Return: always 0(success)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
			if (a < 57)
			{
			putchar(',');
			putchar(' ');
			}
		a++;
	}

	return (0);
}
