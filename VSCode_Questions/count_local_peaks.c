#include <stdio.h>

int main()
{
    int a[50][50];
    int r, c, i, j;
    int count = 0, flag;

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
        for(j = 0; j < c; j++)
        {
            flag = 1;

            if(i > 0 && a[i][j] <= a[i-1][j])
                flag = 0;

            if(i < r-1 && a[i][j] <= a[i+1][j])
                flag = 0;

            if(j > 0 && a[i][j] <= a[i][j-1])
                flag = 0;

            if(j < c-1 && a[i][j] <= a[i][j+1])
                flag = 0;

            if(flag == 1)
                count++;
        }
    }

    printf("Number of peaks = %d", count);

    return 0;
}