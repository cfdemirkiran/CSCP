#include <stdio.h>

int main(void)
{
	int x = 1;

	if (++x > 2,5)
		printf("%d", ++x);
	else
		printf("%d", x++); //3
}