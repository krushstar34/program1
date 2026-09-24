// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main()
{
    int sp,cp,percentage;
    scanf("%d %d",&cp,&sp);
    if(sp>cp){
        percentage =((sp-cp)/cp)*100;
        printf("Profit is %.2f%%,percentage");
    }
    else if(cp>sp){
        printf(" Loss is %.2f%%,percentage ");

    }
    else{
        printf("No Profit no loss");
    }
    return 0;
}
