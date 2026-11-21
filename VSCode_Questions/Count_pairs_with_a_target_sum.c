#include <stdio.h>
int main() {
    int n, i, j;
    long long target, count = 0;
    int a[1000];
    scanf("%d %lld", &n, &target);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((long long)a[i] + a[j] == target) count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}
