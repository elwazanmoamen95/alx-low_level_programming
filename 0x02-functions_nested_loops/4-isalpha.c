#include "main.h"
/**
 * _isalpha - function that will check for lowercase or uppercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is loweercase or uppercase
 *	   otherwise always 0 (success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
