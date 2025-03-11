#include <stdio.h>
#include "main.h"

/**
 * main - main function -> unused declaration
 * @argc: counts number of contents from commandline
 * @argv: values of each input from commandline
 * Return: return 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
