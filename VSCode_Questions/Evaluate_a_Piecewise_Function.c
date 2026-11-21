#include <stdio.h>
int evaluate(int x)
{
    int result;
    if(x < 0)
    {
        result = x*x + 2*x + 1;
    }
    else if(x >= 0 && x < 10)
    {
        result = 3*x + 2;
    }
    else
    {
        result = 5*x - 7;
    }
    return result;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", evaluate(x));
    return 0;
}

