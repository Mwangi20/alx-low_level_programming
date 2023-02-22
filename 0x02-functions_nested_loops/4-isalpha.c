#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Character being checked
 * Return: 1 if is a letter, uppercase or lowercase or 0 for othewise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
