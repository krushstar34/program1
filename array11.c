//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main()
{
    int a[100], n, x, i;
    int l = 0, h, mid;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    h = n - 1;

    while(l <= h)
    {
        mid = (l + h) / 2;

        if(a[mid] == x)
        {
            printf("Found at index %d", mid);
            return 0;
        }

        if(a[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
    }

    printf("-1");

    return 0;
}