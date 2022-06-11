#include<stdio.h>
int main()
{
int n,year;
scanf("%d", &n);
if( n%4 == 0 && n%400 !=0 )
{
printf("Leap Year : %d\n", n);
}else
{
year = (n+4)-(n%4);
printf("Nearest Leap Year: %d\n",year);
}
return 0;
}