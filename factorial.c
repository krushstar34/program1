<<<<<<< HEAD
// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>

int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}

=======
#include<stdio.h>

int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}

>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
