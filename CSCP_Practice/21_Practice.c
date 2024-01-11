/* 9 basamaklı en büyük Armstrong sayısını hesaplayan bir C 
programı yazınız. */

#include <stdio.h>
#include <math.h>

int main()
{
    int number = 999999999;

    for(int i = 0; i < number; i++) {

        int dval1 = pow(number % 1000000000, 9);
        int dval2 = pow(number % 100000000, 9);
        int dval3 = pow(number % 10000000, 9);
        int dval4 = pow(number % 1000000, 9);
        int dval5 = pow(number % 100000, 9);
        int dval6 = pow(number % 10000, 9);
        int dval7 = pow(number % 1000, 9);
        int dval8 = pow(number % 100, 9);
        int dval9 = pow(number % 10, 9);

        int Arms = dval1 + dval2 + dval3 + dval4 + dval5
        + dval6 + dval7 + dval8 + dval9;

        if(Arms == number) {
            printf(" En buyuk 9 basamakli armstrong sayisi : %d", Arms);
            break;
        }
        else
            --number;
    
    }   






}