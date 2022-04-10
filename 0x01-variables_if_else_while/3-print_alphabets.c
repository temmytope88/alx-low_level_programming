#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char g;
	char f;
	
	for (f = 'a'; f<= 'z'; f++)
        {
                putchar(f);
        }
	for (g = 'A'; g <= 'Z'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return(0);
}
