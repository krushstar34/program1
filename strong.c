<<<<<<< HEAD
//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>

int main()
{
    int n,temp,digit,fact,sum =0;
    printf("enter no:");
    scanf("%d",&n);
    temp =n;
    for(;temp>0;temp = temp/10){
        digit = temp % 10;
        fact =1;

    
    for(int i=1;i<=digit;i++)
    {
        fact = fact*i;
    }
    sum sum + fact;
    }
    if(sum==n)
    printf("strong number");
    else 
    printf("not a strong number");
    return 0;
}
=======
//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>

int main()
{
    int n,temp,digit,fact,sum =0;
    printf("enter no:");
    scanf("%d",&n);
    temp =n;
    for(;temp>0;temp = temp/10){
        digit = temp % 10;
        fact =1;

    
    for(int i=1;i<=digit;i++)
    {
        fact = fact*i;
    }
    sum sum + fact;
    }
    if(sum==n)
    printf("strong number");
    else 
    printf("not a strong number");
    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
