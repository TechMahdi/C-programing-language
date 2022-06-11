#include<stdio.h>
int main()
{
int a,b,c,sum,avg;
scanf("%d%d%d", &a,&b,&c);
sum = a+b+c;
avg = sum/3;
if( avg>=60 )
{
printf("First\n");
}else if( avg>=50 && avg<=59 )
{
printf("Second\n");
}else if( avg>=40 && avg<=49 )
{
printf("Third\n");
}else if( avg<40 )
{
printf("Fail\n");
}
return 0;
}