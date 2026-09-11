//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>

int main()
{
    int n,original,digit,sum=0;
    scanf("%d",&n);
    original =n;
    for(;n!=0;n=n/10){
        digit =n%10;
        sum = sum + digit*digit*digit;

    }
    if(original == sum)
    printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;
}
