<<<<<<< HEAD
//Q50: Write a program to print the following pattern:
//*****
 //****
  //***
   //**
    //*

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include<stdio.h>

int main()
{
   int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}
=======
//Q50: Write a program to print the following pattern:
//*****
 //****
  //***
   //**
    //*

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include<stdio.h>

int main()
{
   int i,j;
    for(i=5;i>=1;i--){
        for(j=i;j<=5;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}
>>>>>>> d4cb1af5f611b1426f8d565efb48ec766940e4ce
