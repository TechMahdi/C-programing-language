#include<stdio.h>
int main()
{
char a;
scanf("%c", &a);
if ( a >= 'a' && a<= 'z' )
{
printf("Small Letter\n");
}else if ( a >= 'A' && a<= 'Z' ) {
printf("Capital Letter\n");
}else if ( a>=0 || a<=9 ) {
printf("Digit\n");
}else {
printf("Special Symbol\n");
}
return 0;
}