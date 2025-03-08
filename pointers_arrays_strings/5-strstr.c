#include "main.h"
/**
 * _strstr - pointer to string where string 2 is found
 * @haystack: string to search within
 * @needle: string to find
 * Return: return the pointer to where matched string is found
 */
char *_strstr(char *haystack, char *needle)
{
	int counter = 0;
	int iterate = 0;
	int n_max = 0;
	int word_start = 0;

	while (needle[n_max] != '\0')
	{
		n_max = n_max + 1;
	}

	while (haystack[counter] != '\0') /*checking large string until end*/
	{
		iterate = 0;
		while (needle[iterate] != '\0') /*scanning through needle*/
		{
			if (haystack[counter] == needle[iterate]) /*if each letter of needle match*/
			{
				iterate = iterate + 1;
			}
			counter = counter + 1;
		}

		if (iterate == n_max && needle[iterate] == '\0')
		{
			return (&haystack[word_start]); /*completed full reaeing of needle*/
		}
	}
	return ('\0');
}
