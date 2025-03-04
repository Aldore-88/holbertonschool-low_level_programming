#include "main.h"
/**
 *_strncat - add string onto another with max bytes of n
 *@dest: pointer dest
 *@src: pointer src
 *@n: max number of bytes
 *Return: return value dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
/*	if (j > i)
	{
		dest[i] = '\0';
	}
*/	return (dest);

}
