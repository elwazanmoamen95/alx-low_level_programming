#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0(success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz  ");
		if else(i % 5 == 0)
			printf("Buzz ");
		if else(i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
