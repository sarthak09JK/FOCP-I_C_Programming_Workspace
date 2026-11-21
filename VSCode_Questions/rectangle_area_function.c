
#include <stdio.h>
long long rectangleArea(long long length, long long width)
{
    long long area = length * width;
    return area;
}
int main()
{
    long long length, width;
    scanf("%lld %lld", &length, &width);
    long long result = rectangleArea(length, width);
    printf("%lld", result);
    return 0;
}
