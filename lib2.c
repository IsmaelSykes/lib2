#include "lib2.h"

void mult(int x, int y, int * r)
{
	*r = x * y;
}

void message(char *m, int length)
{
	for(int i = 0; i<=length-1; i++)
		printf("%c",*(m++));
	printf("\n");
}


