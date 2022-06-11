#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
if( n%2==0 )
{
printf("The Even Number Is: %d\n",n*n );
}else
{
printf("The Odd Number Is: %d\n", n*n*n );
}
return 0;
}