#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
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
