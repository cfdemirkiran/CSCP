/* Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur? */
#include <stdio.h>

int main(void)
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
        if (i < 15)
            continue;
    } while (0);

    return 0;
}
