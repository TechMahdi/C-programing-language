#include<stdio.h>
int main()
{
    /* A C program to calculate sum of two integer numbers (given by the user) and print it.*/
    int a, b,sum;
    printf("Give Two Number : ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("The Sum is : %d\n", sum);
    return 0;
}
