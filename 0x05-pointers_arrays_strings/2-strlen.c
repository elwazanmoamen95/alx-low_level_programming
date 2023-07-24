#include "main.h"
/**
 * _strlen - returns the lenght of a string
 *
 * @s: string
 *
 * Return: o
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);
}
