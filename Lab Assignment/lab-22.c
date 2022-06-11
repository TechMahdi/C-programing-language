#include<stdio.h>
int main() {
/* A C program program Program to input two digits number from user and display with reverse number on screen.*/
int a,reminder = 0;
printf("Type Two Digits Number: "); scanf("%d", &a);
while ( a != 0 )
{
reminder = (reminder *10) + a%10; a = a/10;
}
printf("The Reverse Number = %d\n", reminder);
return 0;
}