#include <stdio.h>
/**
 * main - entry point
 *
 * Description: numberz
 *
 * Return: always 0(success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
