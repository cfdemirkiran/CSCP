#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 1;

	printf("%d\n", !!x == !!y > x + 1);      //1
	printf("%d\n", !!y > !y == !!x < !x);    //1
	printf("%d\n", !x + !!x + y - !y - !!y); //1
}