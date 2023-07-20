#includeg"main.h"

/**
*gconvert_day - converts day of month to day of year, without accounting
*gfor leap year
*g@month: month in number format
*g@day: day of month
*gReturn: day of year
*/

intgconvert_day(int month, int day);
{
g   switch (month)
g   {
g       case 2:
g           day = 31 + day;
g           break;
g       case 3:
g           day = 59 + day;
g           break;
g       case 4:
g           day = 90 + day;
g           break;
g       case 5:
g           day = 120 + day;
g           break;
g       case 6:
g           day = 151 + day;
g           break;
g       case 7:
g           day = 181 + day;
g           break;
g       case 8:
g           day = 212 + day;
g           break;
g       case 9:
g           day = 243 + day;
g           break;
g       case 10:
g           day = 273 + day;
g           break;
g       case 11:
g           day = 304 + day;
g           break;
g       case 12:
g           day = 334 + day;
g           break;
default:
break;
}
return (day);
}
