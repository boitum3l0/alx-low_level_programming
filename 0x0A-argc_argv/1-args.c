#include "main.h"

/**
 * main - prints number of arguments to it
 * @argc: number of arguments in command line
 * @argv: array containing number of arguments in command line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
