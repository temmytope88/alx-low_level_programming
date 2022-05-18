#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, sum;
	sum = 0;
	if(argc == 1)
		printf("0\n");
	else
		for(i = 1; i < argc; i++)
			if(!isdigit(argv[i]) || argv[i])
				return (1);
			else
				sum = sum + atoi(argv[i]);
				printf("%d\n", sum);
				return (0);
}
