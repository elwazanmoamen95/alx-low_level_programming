#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @dest: any
 * @src: no
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
