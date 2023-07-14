#include <stdio.h>
/**
 * main - entry point
 *
 * Description: alphANET
 *
 * Return: always 0(success)
 */
int main(void)
{
	char l = 'a', u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
