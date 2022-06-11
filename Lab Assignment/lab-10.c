#include<stdio.h>
int main() {
/* A C program to interchange values of two numbers without using third variable.*/
int a,b;
scanf("%d%d", &a,&b);
a = a+b; b = a-b;
a = a-b;
printf("First Number = %d\n", a); printf("Last Number = %d\n", b);
return 0;
}