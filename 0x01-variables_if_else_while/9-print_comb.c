#include <stdio.h>
/**
*
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	a = 48;
	putchar(a);
	while (a < 57)
	{
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);	
}
