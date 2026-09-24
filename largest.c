<<<<<<< HEAD
// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c){
        printf("largest is %d", a);
    }
    else if(b>a && b>c){
        printf("largest is %d", b);
    }
    else{
        printf("largest is %d", c);
    }
    return 0;
}
=======
// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c){
        printf("largest is %d", a);
    }
    else if(b>a && b>c){
        printf("largest is %d", b);
    }
    else{
        printf("largest is %d", c);
    }
    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
