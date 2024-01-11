//
//  26_Practice_SOL.c
//  CSCP_Practice
//
//  Created by Cem Furkan Demirkıran on 9.01.2024.
//
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
