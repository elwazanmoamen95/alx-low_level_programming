#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 *
 * @s:string
 *
 * Return: anything
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++1)
		;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
