#include <stdio.h>

int isPerfectSquare(int n)
{
    long long i;

    for(i = 0; i * i <= n; i++)
    {
        if(i * i == n)
            return 1;
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", isPerfectSquare(n));

    return 0;
}