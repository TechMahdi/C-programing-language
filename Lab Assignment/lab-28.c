#include<stdio.h>
int main()
{
char a;
scanf("%c", &a);
if ( a== 'A' || a== 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'o' || a == 'O' || a == 'U' || a == 'u' )
{
printf("Vowel\n");
}else {
printf("Consonant\n");
}
return 0;
}