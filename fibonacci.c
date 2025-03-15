#include<stdio.h>
int main(void)
{
    int uzunluk,sayi1=1,sayi2=1,sonraki;
    printf("Fibonacci Uzunluğu Girini:");
    scanf("%d",&uzunluk);
    for (int i=0; i<uzunluk; i++)
    {
        sonraki=sayi1+sayi2;
        printf("%d \t",sayi1);
        sayi1=sayi2;
        sayi2=sonraki;
    }
    return 0;
}