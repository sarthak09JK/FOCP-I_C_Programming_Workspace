#include <stdio.h>

int countMultiples(int n, int k)
{
    return n / k;
}

int main()
{
    int n, k;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    printf("Count = %d", countMultiples(n, k));

    return 0;
}