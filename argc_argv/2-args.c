#include "main.h"
#include <stdio.h>
/**
 * main - function
 * @argc: counter for arguments on commandline
 * @argv: arguments value from commandline in arrray
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
