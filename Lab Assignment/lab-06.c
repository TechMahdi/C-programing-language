#include<stdio.h>
int main() {
/* A C program that will take three numbers from user and find their average. */
int a, b,c,sum; float avg;
printf("Give Three Number : ");
scanf("%d%d%d", &a, &b, &c);
sum = a + b + c;
avg = (float)sum/3;
printf("The Avg is : %f\n", avg);
return 0;
}