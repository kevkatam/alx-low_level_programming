#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: no. of command line arguments
 * @argv: an array containing program command line arguments
 * Return: 0 
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
