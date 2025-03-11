#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int total;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	total = (x * y);
	printf("%d\n", total);
	return (0);
}
