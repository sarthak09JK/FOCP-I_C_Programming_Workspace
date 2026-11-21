#include <stdio.h>

int main()
{
    int a[50][50];
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements: ");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        sum = 0;

        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    for(j = 0; j < c; j++)
    {
        sum = 0;

        for(i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}