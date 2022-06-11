#include<stdio.h>
int main() {
/* A C program to input any Small letter and display it with capital letter.*/
char a;
int ascii;
printf("Type A Character:"); scanf("%c", &a);
ascii = a - 32;
printf("The Small Letter = %c\n", ascii);
return 0;
}