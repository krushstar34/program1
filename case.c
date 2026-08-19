// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include<stdio.h>

int main()
{
    int day;
    printf("enter the day(1-7)");
    scanf("%d",&day);
    switch (day){
        case 1:
        printf("day is monday");
        break;

        case 2:
        printf("day is tuesday");
        break;
        case 3:
        printf("day is wednesday");
        break;
        case 4:
        printf("day is thursday");
        break;
        case 5:
        printf("day is friday");
        break;
        case 6:
        printf("day is saturday");
        break;
        case 7:
        printf("day is sunday");
        break;
        
    }
    return 0;
}
