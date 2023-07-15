#include <stdio.h>
/**
 * main - entry point
 *
 * Description: hexadecimal
 *
 * Return: always 0(success)
 */
int main(void)
{
	char num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
		while (num > 9)
		{
			putchar(num + 87);
			num++;
		}
			putchar('\n');

	return (0);
}
