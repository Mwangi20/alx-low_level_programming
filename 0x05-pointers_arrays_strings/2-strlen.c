#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 * Return: length of the string
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
