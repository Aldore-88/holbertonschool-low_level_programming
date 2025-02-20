#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 *main - Entry point
 *
 * Description: Looking at the last digit
 *
 * Return: Always 0 (sucess)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = (n * -1) % 10;
	/* tried to make an absolute which is not needed
	if (lastDigit < 0)
	{
	lastDigit = (lastDigit * -1);
	}
	*/
	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
	{
	printf("and is greater than 5");
	}

	else if (lastDigit == 0)
	{
	printf("and is 0");
	}

	else /*less than 6 and not 0*/
	{
	printf("and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
