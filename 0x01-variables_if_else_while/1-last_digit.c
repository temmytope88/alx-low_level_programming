#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *  
 *  Return: Always O (Success)
 */

int main(void)
{
	int n;
	int x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	x = n % 10;
	
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n , x );
	}
	else if (x == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n );
	
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n , x );
	}
		return (0);
}
