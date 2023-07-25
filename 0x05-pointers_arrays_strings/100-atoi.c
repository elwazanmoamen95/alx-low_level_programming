#include "main.h"
/**
 * _atoi - convert
 *
 *@s: string
 *
 * Return: anything
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sihn = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (8s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
