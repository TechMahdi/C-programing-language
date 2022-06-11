#include<stdio.h>
int main() {
/* A C program to input any Capital letter and display it with small letter.*/
char a;
int ascii;
printf("Type A Character:"); scanf("%c", &a);
ascii = a+32;
printf("The Capital Letter = %c\n", ascii);
return 0;
}