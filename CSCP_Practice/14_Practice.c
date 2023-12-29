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
	int x, y, z, t;
 
	x = y = z = t = 1;
    
	x = ++y > 1 || z++ > 1 && ++t > 1;
	printf("%d%d%d%d", x, y, z, t);
 
	return 0;
}