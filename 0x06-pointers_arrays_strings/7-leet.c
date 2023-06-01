#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: encoded string
 */
char *leet(char *str)
{
	int count = 0, i;
	int low[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '0')
	{
		for (i = 0; i < 5; i++)
		{
			if(*(str + count) == low[i] || *(str + count) == upper[i])
			{
				*(str + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
