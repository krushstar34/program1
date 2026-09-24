<<<<<<< HEAD
//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>

int main()
{
    int n,count =0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);

    return 0;
}
=======
//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>

int main()
{
    int n,count =0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);

    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
