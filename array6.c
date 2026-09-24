//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main()
{
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d",
           positive, negative, zero);

    return 0;
}