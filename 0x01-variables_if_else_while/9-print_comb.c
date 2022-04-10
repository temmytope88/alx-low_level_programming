#include <stdio.h>
/**
*
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	for (a = 48; a <= 57; a++)
	{
		if (a < 57)
		{
			putchar(a);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(a);
		}
	}
	return (0);	
}
