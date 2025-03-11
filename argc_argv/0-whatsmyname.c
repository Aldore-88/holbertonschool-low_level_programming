#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: number of arguments in commandline
 * @argv: value of arguments in array from commandline
 * Return: 0
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
