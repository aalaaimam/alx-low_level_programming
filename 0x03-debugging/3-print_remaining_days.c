#include <stdio.h>
int main(void)
{
    int year, month, day;
    int leap_year;
    int days_in_month;
    int days_in_year;
    int remaining_days;
    printf("Enter year: ");
    scanf(" %d ", &year);
    printf("Enter month: ");
    scanf(" %d ", &month);
    printf("Enter day: ");
    scanf(" %d ", &day);
    leap_year = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    days_in_month = (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31 : (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : leap_year ? 29 : 28;
    days_in_year = 365 + leap_year;
    remaining_days = days_in_year - (day + (month - 1) * days_in_month);
    printf("There are %d days remaining in the year.\n", remaining_days);
    return 0;
}
