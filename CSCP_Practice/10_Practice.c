#include <stdio.h>

int g = 3;

int f1(int x)
{
	return x * g++; // 9 , g=4 /// 30 * 6 = 180
}

int f2(int x)
{
	return x * ++g; // 9 * (1+4) = 45 /// 6 * 5 = 30
}


int main(void)
{
	printf("%d\n", f2(f1(g))); // 45
	printf("%d\n", f1(f2(g))); // 180