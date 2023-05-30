#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, a = 0, b = 1, c = 1, d;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			b *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				c *= 10;
			size++;
		}
		count++;
	}

	for (d = count - size; d < count; d++)
	{
		a = a + ((*(s + d) - 48) * c);
		c /= 10;
	}
	return (a * b);
}
