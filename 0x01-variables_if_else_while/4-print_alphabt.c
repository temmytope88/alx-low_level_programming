#include <stdio.h>
/**
*main - entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		if (g == 'e' || g == 'q')
		{
			continue;
		}
		putchar(g);
	}
	putchar('\n');
	return(0);
}
