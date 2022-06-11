#include<stdio.h>
int main() {
/* A C program to input two numbers and print their quotient and remainder.*/
int a,b,remainder,quotient;
printf("Type A Number:");
scanf("%d%d", &a, &b);
quotient = a/b; remainder = a - (quotient)*b;
printf("Quotient = %d\n", quotient); printf("Remainder = %d\n", remainder);
return 0;
}