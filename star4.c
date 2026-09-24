<<<<<<< HEAD
//Q52: Write a program to print the following pattern:

/*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include<stdio.h>

int main()
{
    int i,j;
    for( i =1;i<=5;i++){
        int n;
        if(i<=3)
        n = 2*i -1;
        else
        n = 2*(5-i) +1;
        for(j=1;j<=n;j++){
            printf("\n");
        }
        if(i!=5)
        printf("\n");
    }
    return 0;
}
=======
//Q52: Write a program to print the following pattern:

/*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include<stdio.h>

int main()
{
    int i,j;
    for( i =1;i<=5;i++){
        int n;
        if(i<=3)
        n = 2*i -1;
        else
        n = 2*(5-i) +1;
        for(j=1;j<=n;j++){
            printf("\n");
        }
        if(i!=5)
        printf("\n");
    }
    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
