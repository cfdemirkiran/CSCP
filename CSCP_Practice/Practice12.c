/*
Sorunun yanıtı şu seçeneklerden biri de olabilir:

Sentaks hatası (derleme zamanı hatası)
Tanımsız davranış. (undefined behavior)
Derleyiciye göre değişir. (unspecified behavior / implementation defined)

*/
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;

	int a = x+++y;
	
	printf("%d\n", a);
	printf("%d\n", x);
	printf("%d\n", y);
}