/*
 * 22_Practice.c
 * CSCP_Practice
 *
 * What is the output?
 *
 * Created by Cem Furkan Demirkıran on 9.01.2024.
 */

#include<stdio.h>
 
int main(void)
{
    int num = 30;
    int ival = (num > 5 ? num <= 10 ? 10 : 20 : 50);
 
    printf("%d\n", ival);
}
