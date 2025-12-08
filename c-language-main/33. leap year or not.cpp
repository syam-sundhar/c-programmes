//to write a simple program to identify if a year is leap year or not
#include<stdio.h>
int main()
    {
        int year;
        printf("enter year : ");
        scanf("%d",&year);
/*1900 was not a leap year according to the Gregorian calendar rules,
even though it was divisible by 4. Century years (those ending in '00')
are only leap years if they are also divisible by 400. Since 1900 is
not divisible by 400, it does not have a leap day.*/
        if((year%4==0) && ((year%100!=0) || (year%400==0)))
            {
                printf("%d is leap year",year);
            }
        else 
            {
                printf("%d is not a leap year",year);
            }
        return 0;
    }