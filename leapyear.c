#include <stdio.h>  //header file

int main()
{
    int year; //input variable

    printf("Please enter the year to check: "); //message to user to give input
    scanf("%d",&year);//take input

    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)) //checking the condition
    {
        printf("%d is a leap year", year); // showing the result
    }
    else
    {
        printf("%d is not a leap year", year); // showing the result
    }

    return 0;
}
