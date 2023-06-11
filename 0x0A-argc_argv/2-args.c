#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: no. of command line arguments
 * @argv: array containing program comand line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
