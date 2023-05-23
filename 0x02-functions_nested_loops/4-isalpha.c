#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character in ASCII
 * Return: returns 1 if the character is alphabet. return 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
