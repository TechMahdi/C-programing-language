#include<stdio.h>
int main() {
/* A C program program to input three digits number from user and calculate sum of first and last
numbers.*/
int a,b,c,sum;
printf("Type Three Digits Number: "); scanf("%d", &a);
b = a/100; c = a%10;
sum = b + c;
printf("The Sum Is = %d\n", sum);
return 0;
}