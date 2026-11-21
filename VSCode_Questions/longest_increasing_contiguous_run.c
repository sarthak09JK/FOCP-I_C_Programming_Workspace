#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int current = 1, best = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        if(a[i] > a[i-1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if(current > best)
        {
            best = current;
        }
    }

    printf("Longest run = %d", best);

    return 0;
}