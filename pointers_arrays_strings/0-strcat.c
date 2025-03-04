#include "main.h"
/**
 *_strcat - string catalate? put strings together
 *@dest: pointer destination
 *@src: pointer source
 *Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	return (dest);
}
