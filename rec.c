#include<stdio.h>

int main()
{
    int l, b;
    printf("enter length: ");
    scanf("%d",&l);
    printf("enter breadth: ");
    scanf("%d", &b);
    printf("the perimeter is %d\n", 2*(l+b));

    printf("the area is %d\n", l*b);


    return 0;
}
