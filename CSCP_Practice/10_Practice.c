#include <stdio.h>

int g = 3;

int f1(int x)
{
	return x * g++;
}

int f2(int x)
{
	return x * ++g;
}


int main(void)
{
	printf("%d\n", f2(f1(g)));
	printf("%d\n", f1(f2(g)));
