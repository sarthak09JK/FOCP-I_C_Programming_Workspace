#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int rows = 2 * n - 1;
    for (int i = 1; i <= rows; i++) {
        int spaces;
        if (i <= n) {
            spaces = n - i;
        } else {
            spaces = i - n;
        }
        int stars = 2 * (n - spaces) - 1;
        
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
