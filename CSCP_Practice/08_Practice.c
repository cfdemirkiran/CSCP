#include <stdio.h>

double foo(double x)
{
	return x + 5,67;
}

int main(void)
{
	printf("%f\n", foo(1241.)); // virgülün sağında ki ifade return olacaktır. oda 67.
}