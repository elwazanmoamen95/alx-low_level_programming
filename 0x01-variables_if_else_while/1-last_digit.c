#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the last digit
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (n % 10 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (n % 10 == 0)
	printf("Last digit of %d is %d and is 0\n", n, d);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	return (0);
}
