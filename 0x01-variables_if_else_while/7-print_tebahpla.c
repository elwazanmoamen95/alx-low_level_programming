#include <stdio.h>
/**
 * main - entry point
 *
 * Description: smile in the mirrir
 *
 * Return: always 0(success)
 */
int main(void)
{
	char lr = 'z';

	while (lr >= 'a')
	{
		putchar(lr);
		lr--;
	}
	putchar('\n');
	return (0);
}
