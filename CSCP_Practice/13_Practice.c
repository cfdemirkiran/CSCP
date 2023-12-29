/*
Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

Sorunun yanıtı şu seçeneklerden biri de olabilir:

Sentaks hatası (derleme zamanı hatası)
Tanımsız davranış. (undefined behavior)
Derleyiciye göre değişir. (unspecified behavior / implementation defined)
*/

#include <stdio.h>

void func(int x)
{
	++x;
	printf("%d", x);
}

int main(void)
{
	int x = 10;
	
	func(++x);
	func(x++);
	
	printf("%d", x);
}