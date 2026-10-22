//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    int n, a[20], count[10] = {0};
    int i = 0, j, max = 0, ans = 0;

    scanf("%d", &n);

    while(n > 0)
    {
        a[i] = n % 10;
        i++;
        n = n / 10;
    }

    for(j = 0; j < i; j++)
        count[a[j]]++;

    for(j = 0; j < 10; j++)
    {
        if(count[j] > max)
        {
            max = count[j];
            ans = j;
        }
    }

    printf("%d", ans);

    return 0;
}