#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alpha in lowercase
 *
 * Return: always 0(success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');

	return (0);
}
