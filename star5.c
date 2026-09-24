<<<<<<< HEAD
//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main()
{
    int i,j;
    for( i =1;i<=5;i++){
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    for(i=4;i>=1;i--){
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
=======
//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    for( i =1;i<=5;i++){
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    for(i=4;i>=1;i--){
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
