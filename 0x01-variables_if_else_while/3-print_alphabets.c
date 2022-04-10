#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char g;
	char f;

	for (g = 'A'; g <= 'Z'; g++)
	{
		putchar(g);
	}
	for (f = 'a'; f<= 'z'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return(0);
}
