#include "main.h"
/**
 * main - entry point
 *
 * Description: even liber abbaci
 *
 * Return: always 0(success)
 */
int main(void)
{
	long a = 0, b = 1, sum, totalsum;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			totalsum += sum;

		a = b;
		b = sum;
	}
	printf("%lu\n", totalsum);

	return (0);
}
