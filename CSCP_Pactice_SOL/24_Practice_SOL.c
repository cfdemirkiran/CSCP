/*
 *  24_Practice.c
 *  CSCP_Practice
 *
 * Arkadaş Sayılar *(amicable numbers / friendly numbers)*
 *
 * *x* ve *y* pozitif tamsayılar olmak üzere, eğer *x* sayısının çarpanları toplamı *y* sayısına, ve aynı
 * zamanda *y* sayısının çarpanları toplamı *x* sayısına eşit ise, bu sayılar *“arkadaştır”*.
 * Örneğin *220* ve *284* arkadaş sayılardır:
 *
 *
 * 220 => 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
 * 284 => 1 + 2 + 4 + 71 + 142 = 220
 *
 * Kendisine gönderilen iki tamsayının arkadaş olup olmadıklarını sınayan, __are_friends__ isimli işlevi
 * tanımlayın:
 *
 * int are_friends(int number1, int number2);
 *
 * Yazdığınız işlevi aşağıdaki arkadaş sayı çiftleri ile test edebilirsiniz:
 *
 * 220 284
 * 1184 1210
 * 2620 2924
 * 5020 5564
 * 6232 6368
 * 10744 10856
 * 12285 14595
 * 17296 18416
 *
 *  Created by Cem Furkan Demirkıran on 9.01.2024.
 */

#include <stdio.h>

int are_friends(int number1, int number2) {
    
    int temp1 = 0;
    int temp2 = 0;
    for(int i = 0; i < number1; i++) {
        if((number1 % i) == 0 ) {
            temp1 += i;
        }
    }
    for(int i = 0; i < temp1; i++) {
        if((temp1 % i) == 0)
            temp2 += i;
    }
    if( temp2 == number1)
        printf("%d and %d are friendly numbers\n",temp2 ,number1);
    else
        printf("%d and %d are not friendly numbers\n",temp2, number1);
    return 0;
}

int main(void)
{
    int x, y;
    printf("Write 2 numbers:");
    scanf("%d%d", &x, &y);
    
    are_friends(x, y);
}
