#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: argument count
 * @argv: argument value
 * Return: 1 if ERROR, 0 if success
 *
 */
int main(int argc, char *argv[])
{
	int total;
	int x;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	total = (x * y);
	printf("%d\n", total);
	return (0);
}
