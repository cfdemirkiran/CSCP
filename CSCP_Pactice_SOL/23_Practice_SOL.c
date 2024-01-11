/*
 *  23_Practice.c
 *  CSCP_Practice
 *
 *
 * Aşağıdaki C programında yorum satırı bulunan yere bir kod eklemeniz isteniyor:
 *
 * Yazdığınız kod çalıştırıldığında girilen sayıları ekrana şu formatta yazdırmalı:
 *
 *   girdi           çıktı
 *   =====        ============
 *   30 10 20     10 < 20 < 30
 *   7 5 7        5 < 7 = 7
 *   2 2 2        2 = 2 = 2
 *   9 6 6        6 = 6 < 9
 *
 * Created by Cem Furkan Demirkıran on 9.01.2024.
 *
 */
 
 #include <stdio.h>

 int main(void)
 {
     int x, y, z;

     printf("uc tamsayi giriniz: ");
     scanf("%d%d%d", &x, &y, &z);
     
     /* x En buyuktur */
     if( x > y && x > z ) {
         if( y > z)
             printf(" %d < %d < %d\n", z, y, x);
         else if ( z > y)
             printf(" %d < %d < %d\n", y, z, x);
         else
             printf(" %d = %d < %d\n", z, y, x);
     }
     /* y En buyuktur */
     if( y > x && y > z ) {
         if( x > z)
             printf(" %d < %d < %d\n", z, x, y);
         else if ( z > y)
             printf(" %d < %d < %d\n", x, z, y);
         else
             printf(" %d = %d < %d\n", z, x, y);
     }
     /* z En buyuktur */
     if( z > y && z > x ) {
         if( x > y)
             printf(" %d < %d < %d\n", y, x, z);
         else if ( y > x)
             printf(" %d < %d < %d\n", x, y, z);
         else
             printf(" %d = %d < %d\n", x, y, z);
     }
     /* iki buyuktur, bir kucuktur */
     if( x == y && x > z)
         printf(" %d < %d = %d\n", z, y, x);
     if( x == z && x > y)
         printf(" %d < %d = %d\n", y, z, x);
     if( z == y && z > x)
         printf(" %d < %d = %d\n", x, y, z);
     /* hepsi esittir */
     if( x == y && x == z)
         printf(" %d = %d = %d\n", z, y, x);
 }


/* OR */

#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("uc tamsayi giriniz: ");
    scanf("%d%d%d", &x, &y, &z);

    // Girilen sayıları küçükten büyüğe sıralama
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    if (y > z) {
        int temp = y;
        y = z;
        z = temp;
    }
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Sonucu ekrana yazdırma
    printf("%d", x);
    if (x < y)
        printf(" < ");
    else if (x == y)
        printf(" = ");
    else
        printf(" > ");
    printf("%d", y);

    if (y < z)
        printf(" < ");
    else if (y == z)
        printf(" = ");
    else
        printf(" > ");
    printf("%d\n", z);

    return 0;
}

