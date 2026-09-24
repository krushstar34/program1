<<<<<<< HEAD
//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main()
{
    int n,original,reverse =0,digit;
    scanf("%d",&n);
    original =n;
    for(;n!=0;n=n/10){
        digit = n%10;
        reverse = reverse *10 + digit;
    }
    if (original == reverse)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;
}
=======
//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main()
{
    int n,original,reverse =0,digit;
    scanf("%d",&n);
    original =n;
    for(;n!=0;n=n/10){
        digit = n%10;
        reverse = reverse *10 + digit;
    }
    if (original == reverse)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
