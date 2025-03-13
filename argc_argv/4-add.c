#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * error - error function
 * Return: 1 for error and exit
 */

int error(void)
{
	printf("Error\n");
	exit(1);
}

/**
 * int_checker - checking for int value in array
 * @value: array value to check through
 * Return: 0 successful
 *
 */
int int_checker(char *value)
{
	/*check if digit is a number if not error*/
	int i = 0;

	while (value[i] != '\0')
	{
		if ((value[i] < 48) || (value[i] > 57))
		{
			error();
		}
		i = i + 1;
	}
	return (0);
}

/**
 * main - iterating through each number and to check
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int counter = 1;
	int total = 0;

	if (argc < 1)
	{
		printf("0");
		return (0);
	}

	if ((argc == 1)/*not digit print error*/)
	{
		error();
	}

	while (counter < argc) /*add all numbers together*/
	{
		int_checker(argv[counter]);
		total = total + atoi(argv[counter]);
		counter = counter + 1;
	}
	printf("%d\n", total);
	return (0);
}
