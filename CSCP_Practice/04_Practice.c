#include <stdio.h>

int main(void)
{
	int x = -3 + 4 * 5 - 6;

	printf("%d\n", x); //11

	x = 3 + 4 % 5 - 6;

	printf("%d\n", x); //1

	x = -3 * 4 % -6 / 5;

	printf("%d\n", x); //0

	x = (7 + 6) % 5 / 2; 

	printf("%d\n", x); //1
}