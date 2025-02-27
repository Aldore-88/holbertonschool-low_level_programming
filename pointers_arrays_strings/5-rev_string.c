#include "main.h"
/**
 *rev_string - reverse string but how?
 *@s: string
 *
 *
 */
void rev_string(char *s)
{
	int x;
	int temp;
	int max_val;
	int s;
	int s*

	x = 0;

	while (s[x] != '\0')
	{
		x = x + 1;
	}
	max_val = x - 1;
/*get middle value, also need to account for odd char*/

	x = 0;

/*swap using temp char*/
	while (x < (max_val - x))
	{
	temp = s[x];
	s[x] = s[max_val - x];
	s[max_val - x] = temp;
	x = x + 1;
	}
}
