#include <stdio.h>

int gcd(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d", gcd(a, b));

    return 0;
}