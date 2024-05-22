#include<stdio.h>
// 17.05.2024

void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}
