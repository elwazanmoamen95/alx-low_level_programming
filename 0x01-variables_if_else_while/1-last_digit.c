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
	int n, d = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	printf("Last digit of %d is %d and is greater than 5", n, d);
	else if (n % 10 == 0)
	printf("Last digit of %d is %d and is 0", n, d);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	return (0);
}
