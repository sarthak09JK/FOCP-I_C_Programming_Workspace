#include <stdio.h>
int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, i, j;
    int a[1000], ds[1000];
    long long count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        ds[i] = digitSum(a[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (ds[i] == ds[j]) count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}