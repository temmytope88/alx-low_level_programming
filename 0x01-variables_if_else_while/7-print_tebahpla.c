#include <stdio.h>
/**
*
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	char g = 'z';

	for(g = 'z'; g <= 'a'; g--)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
