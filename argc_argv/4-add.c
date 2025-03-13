#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */

int error(void)
{
	printf("Error\n");
	return (1);
}

int main(int argc, char *argv[])
{
	int counter = 1;
	int total = 0;
	
	if (argc < 1)
	{
		return (0);
	}

	if ((argc == 1)/*not digit print error*/)
	{
		error();
		return(1);
	}

	while (counter < argc) /*add all numbers together*/
	{
		if ((*argv[counter] < 48) || (*argv[counter] > 57))
		{
			error();
			return (1);
		}
		total = total + atoi(argv[counter]);
		counter = counter + 1;
	}
	printf ("%d\n",total);
	return (0);
}
