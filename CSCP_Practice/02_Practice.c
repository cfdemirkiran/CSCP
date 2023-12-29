#include <stdio.h>

int main(void)
{
	int x, y, z;

	x = 2, y = 1, z = 0;
	x = x && y || z;
	printf("%d\n", x);  //1

	printf("%d\n", x || !y && z);  //1

	x = y = 1;
	z = x++ - 1;
	printf("%d\n", x); //2
	printf("%d\n", z); //0

	z += -x++ + ++y;
	printf("%d\n", x); //3
	printf("%d\n", z); //0
}
	