#include <stdio.h>

int main(void)
{
	int a = 0;

	if (-1 < a-- < 0)
		printf("%d", --a);
	else
		printf("%d", ++a); //0
}