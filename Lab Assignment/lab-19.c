#include<stdio.h>
int main() {
/* A C program program to input the number of days from the user and convert it into years, months and days.*/
int days, year, months, weeks;
printf("Type Days:");
scanf("%d", &days);
year = days/365; weeks = days/7;
months = days/30;
printf("Year = %d\n", year); printf("Weeks = %d\n", weeks); printf("Months = %d\n", months);
return 0;
}