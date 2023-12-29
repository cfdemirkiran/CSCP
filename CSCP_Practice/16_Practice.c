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
	int a = 11;
 
	if (10 < --a < 20)
		printf("%d", --a);
	else
		printf("%d", ++a);
}