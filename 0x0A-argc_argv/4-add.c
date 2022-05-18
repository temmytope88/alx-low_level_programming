#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, sum;
	sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
			if (!(isdigit(atoi(argv[i]))) || atoi(argv[i]) < 0)
				return (1);
			else
			{
				sum = sum + atoi(argv[i]);
				printf("%d\n", sum);
			}
	}
	return (0);
}
