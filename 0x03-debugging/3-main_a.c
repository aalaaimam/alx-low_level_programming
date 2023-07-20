#include <stdio.h>
#include "main.h"
int convert_day(int month,int day);
int main(void)
{
int month;
int day;
int year;
month = 4; 
day = 01;
year = 1997;
scanf(" %d %d %d ", &month, &day, &year);
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
void print_remaining_days(int month, int day, int year)
{
printf("Remaining days: %d\n", 365 - day);
}
print_remaning_days(month, day, year);
return(0);
}
int convert_day(int month,int day)
{
switch (month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
return day;
case 4:
case 6:
case 9:
case 11:
return day + 31;
case 2:
if (year % 4 == 0)
{
return day + 29;
else
return day + 28;
}
}
