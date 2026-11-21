#include <stdio.h>
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main() {
    long long n, m, x;
    int count = 0;
    scanf("%lld %lld", &n, &m);
    for (x = 1; x <= m; x++) {
        if (gcd(x, n) == 1) count++;
    }
    printf("%d\n", count);
    return 0;
}
