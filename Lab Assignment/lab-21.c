#include<stdio.h>
int main() {
/* A C program program to input three digits number from user and display square of first and last numbers*/
int a,b,c,square_first,square_last;
printf("Type Three Digits Number: "); scanf("%d", &a);
b = a/100; c = a%10;
square_first = b*b;
square_last = c*c;
printf("The First Digits Square = %d\n", square_first); printf("The Last Digits Square = %d\n", square_last);
return 0;
}