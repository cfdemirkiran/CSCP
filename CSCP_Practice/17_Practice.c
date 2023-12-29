/*
Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?
Sorunun yanıtı şu seçeneklerden biri de olabilir:

Sentaks hatası (derleme zamanı hatası)
Tanımsız davranış. (undefined behavior)
Derleyiciye göre değişir. (unspecified behavior / implementation defined)
*/

#include <stdio.h>
 
int main(void)
{
	int x = 1;
	
	if (++x > 2,5)
		printf("%d", ++x);
	else
		printf("%d", x++);
}