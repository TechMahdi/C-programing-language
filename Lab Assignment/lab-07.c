#include<stdio.h>
int main() {
/* A C program to convert KM value into meter value.*/
float distance, meter;
scanf("%f", &distance);
meter = distance*1000;
printf("%f\n", meter);
return 0;
}