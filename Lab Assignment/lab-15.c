#include<stdio.h>
int main() {
/* A C program to input any Capital letter and display it with small letter.*/
char a,b;
printf("Type A Character:"); scanf("%c", &a);
b = tolower(a);
printf("The Small letter= %c\n", b);
return 0; }