#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Напишить програму, що вводить числа 5 різних цілих типів та коректно рахує їх загальне середнє (як дійсний тип) та побітову суму їх модулів.

int main()
{
    double res;
    char res_bit;
    short b;
    int a;
    long c;
    unsigned d;
    unsigned char e;
    printf("Enter 5 different int type: ");

    scanf("%d", &b);
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &e);
    scanf("%d", &d);

    res = ((double)a+ (double)b+ (double)c + (double)d +(double)e )/5;
    printf("%f", res);

    res_bit = (char)a | (char)b;
    res_bit = res_bit | (char)c;
    res_bit = res_bit | (char)d;
    res_bit = res_bit | (char)e;

    printf("\n");
    printf("%d", res_bit);

    return 0;
}
