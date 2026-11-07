#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        int stars = i;
        if (i > (n + 1) / 2) {
            stars = n - i + 1;
        }
        
        int spaces = n - 2 * stars;
        
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        int start_j = 0;
        if (spaces < 0) {
            start_j = n - stars;
        }
        for (int j = start_j; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
