#include <stdio.h>

int main(void)
{
	int x = 4;
	int y = 10;

	printf("%d\n", (x++, ++x)); 
	printf("%d\n", (y *= x++, y + x));
}