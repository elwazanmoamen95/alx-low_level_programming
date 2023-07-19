#include "main.h"
/**
 * main - entry point
 *
 * Description: prints the first 50 fib numbers
 *
 * Return: always 0(success)
 */
int main(void)
{
	long i, a, b, sum;

	a = 0, b = 1;

	for (i = 0; i < 50; i++)
	{
		sum =  a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}


	return (0);
}
