#include<stdio.h>
int main() {
/* A C program to input any Small letter and display it with capital letter.*/
char a,b;
printf("Type A Character:"); scanf("%c", &a);
b = toupper(a);
printf("The Capital letter= %c\n", b);
return 0;
}