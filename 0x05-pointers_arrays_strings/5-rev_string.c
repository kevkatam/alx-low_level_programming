#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */
void rev_string(char *s)
{
    int count = 0, a, b;
    char temp;

    while (s[count] != '\0')
    {
        count++;
    }

    for (a = 0; a < count / 2; a++)
    {
        b = count - a - 1;

        temp = s[a];
        s[a] = s[b];
        s[b] = temp;
    }
}

