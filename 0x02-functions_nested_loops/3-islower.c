#include"main.h"
/**
 * _islower - function that will check for lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is loweercase
 *	   otherwise always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
