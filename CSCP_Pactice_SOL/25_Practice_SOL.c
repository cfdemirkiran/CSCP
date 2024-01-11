//
//  25_Practice_SOL.c
//  CSCP_Practice
//
//  Created by Cem Furkan Demirkıran on 9.01.2024.
//

#include <stdio.h>
#include <math.h>

int is_prime(int num);

int is_superprime(int val);

int main(void) {
    int number;

    printf("Bir tamsayı giriniz: ");
    scanf("%d", &number);

    if (is_superprime(number)) {
        printf("%d bir süper asal sayıdır.\n", number);
    } else {
        printf("%d bir süper asal sayı değildir.\n", number);
    }

    return 0;
}

// Bir sayının asal olup olmadığını kontrol eden işlev
int is_prime(int num) {
    if (num < 2) {
        return 0; // Asal değil
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Asal değil
        }
    }
    return 1; // Asal
}

// Bir sayının süper asal olup olmadığını kontrol eden işlev
int is_superprime(int val) {
    // Sayının indeksini bul
    int index = 1;
    int temp = 3; // İlk asal sayı olan 2'yi atladık
    while (temp < val) {
        temp += 2;
        if (is_prime(temp)) {
            index++;
        }
    }

    // İndeks asal mı kontrol et
    return is_prime(index);
}
