/*
Aşağıdaki C programını derleyip çalıştırın:
Program neden ekrana

d, 1. degerinde degil
yazısı çıkıyor? Açıklayınız.
*/


#include <stdio.h>

int main(void)
{
	double d = 0.;
	int i;

	for (i = 0; i < 10; i++)
		d += .10;

	if (d == 1.)
		printf("d, 1. degerinde\n");
	else
		printf("d, 1. degerinde degil\n");

	return 0;
}