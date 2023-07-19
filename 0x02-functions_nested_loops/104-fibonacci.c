#include "main.h"
/**
 * numLength - returns the length
 *
 * @num: number
 *
 * Return: num of digit
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - entry point
 *
 * Description: find and print first 98
 *
 * Return: always 0(success)
 */
int main(void)
{
	int i, 0;
	long a = 1, b = 2, sum, mx = 100000000, a1 = 0, b1 = 0, sum0 = 0;

		for (i = 1; i <= 98; i++)
		{
			if (a1 > 0)
				printf("%lu", a1);
		0 = numLength(mx) - 1 - numLength(a);

		while (a1 > 0 && 0s > 0)
		{
			printf("%d", 0);
			0--;
		}

		printf("%lu", a);

		sum = (a + b) % mx;
		sum0 = a1 + b1 + (a + b) / mx;
		a = b;
		a1 = b1;
		b = sum;
		b1 = sum0;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		}



	return (0);
}
