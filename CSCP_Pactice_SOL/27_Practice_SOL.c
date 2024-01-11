#include <stdio.h>

int main(void) {
    int N, a, b, c, d;

    printf("100000'den kucuk Hardy-Ramanujan sayilari:\n");

    for (N = 1; N < 100000; N++) {
        for (a = 1; a < N; a++) {
            b = N - a * a * a;
            if (b <= a) break;

            for (c = a + 1; c < N; c++) {
                d = N - c * c * c;
                if (d <= c) break;

                if (a != b && a != c && a != d && b != c && b != d && c != d) {
                    if (a * a * a + b * b * b == c * c * c + d * d * d) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", N, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
