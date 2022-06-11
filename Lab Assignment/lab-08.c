#include<stdio.h>
int main() {
/* A C program to convert Celsius value into Fahrenheit value.*/
float tempreture, convert_data;
scanf("%f", &tempreture);
convert_data = ((9*tempreture)/5)+32;
printf("Fahrenheit value is : %f\n", convert_data);
return 0;
}