#include <stdio.h>
#include "lib2.h"

int main(void)
{
	printf("Test lib2 \n");
	int a = 10, b = 3, c = 0;
	mult(a,b,&c);
	printf("Mult: %d \n",c);
	return 0;
}