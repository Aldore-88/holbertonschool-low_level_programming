#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_check - check string malloc
 * @s: string input
 * Return: 0 success
 *
 *
 */
char str_check(char *s)
{
	if (s == NULL)
	{
		s = "";
	}
	return (0);
}
/**
 * _strlen - string length
 * @x: character string
 * Return: i length of string
 *
 */
unsigned int _strlen(char *x)
{
	int i;

	i = 0;

	while (x[i] != '\0')
	{
		i = i + 1;
	}
	return (i - 1);
}

/**
 * string_nconcat - concat 2 strings together n char of s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of char of s2
 * Return: return full string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, total_len;
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);

	str_check(s1);
	str_check(s2);

	if (n >= s2_len)
	{
		n = s2_len; /*take the smaller value of both*/
	}

	total_len = sizeof(char) * (s1_len + n + 1);
	str = malloc(total_len);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < total_len)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i = i + 1;
		}
		j = 0;
		while (j < n) /*smaller of n or s2*/
		{
			str[i] = s2[j];
			i = i + 1;
			j = j + 1;
		}
	}
	str[i] = '\0';
	return (str);
}
