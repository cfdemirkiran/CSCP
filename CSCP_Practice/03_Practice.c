#include <stdio.h>

int main(void)
{
	int x = 2, y, z;

	x *= 3 + 2;
	printf("%d\n", x); //10

	x *= y = z = 4;
	printf("%d\n", x); //40

	x = y == z;
	printf("%d\n", x); //1

	x == (y = z);
	printf("%d\n", x); //1
}