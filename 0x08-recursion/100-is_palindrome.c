#include "main.h"
/**
 * is_palindrome - same letters
 *
 * @s: string
 *
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int mod);
int last_index(char *s);
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * last_index - count string
 * 
 * @s: string
 *
 * Return: number of string
 */
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0)) || (end == start + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
