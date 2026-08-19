// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the length : ");
    scanf("%d", &a);
    printf("enter the length : ");
    scanf("%d", &b);
    printf("enter the length : ");
    scanf("%d", &c);
    if(a==b && b==c ){
        printf("triangle is equilateral");
    }
    else if(a==b || b==c || a==c){
        printf("triangle is isosceles");
    }
    else{
        printf("triangle is scalene");
    }

    return 0;
}
