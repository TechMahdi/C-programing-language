#include<stdio.h>
int main()
{
int n,a,b,c;
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("5. Remainder\n");
printf("Choice One: ");
scanf("%d", &n);
printf("Type Two Number: ");
scanf("%d%d",&a,&b);
switch (n)
{
case 1:
printf("Sum = %d\n", (a+b));
break;
case 2:
printf("Subtract = %d\n", (a-b));
break;
case 3:
printf("Multiply = %d\n", (a*b));
break;
case 4:
printf("Divide = %.2f\n", ((float)a/(float)b));
break;
case 5:
printf("Remainder = %d\n", (a%b));
break;
default:
printf("Error!\n");
}
return 0;
}