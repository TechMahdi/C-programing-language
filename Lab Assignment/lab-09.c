#include<stdio.h>
int main() {
/* A C program to interchange values of two numbers using third variable.*/
int a,b,tmp;
scanf("%d%d", &a,&b);
tmp = a; a = b;
b = tmp;
printf("First Number = %d\n", a); printf("Last Number = %d\n", b);
return 0;
}