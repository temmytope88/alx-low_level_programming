#include "main.h"
/**
 * print_alphabet_×10 - prints the alphabet in lowercase 10 times.
 * Return: Always 0.
 **/
void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
