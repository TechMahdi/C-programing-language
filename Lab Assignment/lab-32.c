#include<stdio.h>
int main()
{
int a,b,c;
char n;
printf("+. Add\n");
printf("-. Subtract\n");
printf("*. Multiply\n");
printf("/. Divide\n");
printf("%%. Remainder\n");
printf("Choice One: ");
scanf("%c", &n);
printf("Type Two Number: ");
scanf("%d%d",&a,&b);
switch (n)
{
case '+':
printf("Sum = %d\n", (a+b));
break;
case '-':
printf("Subtract = %d\n", (a-b));
break;
case '*':
printf("Multiply = %d\n", (a*b));
break;
case '/':
printf("Divide = %.2f\n", ((float)a/(float)b));
break;
case '%':
printf("Remainder = %d\n", (a%b));
break;
default:
printf("Error!\n");
}
return 0;
}