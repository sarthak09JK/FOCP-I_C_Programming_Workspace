#include <stdio.h>

int main()
{
    int a[50][50];
    int r, c, i, j, k;
    int min, flag, found = 0;

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
        min = a[i][0];

        for(j = 1; j < c; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
            }
        }

        for(j = 0; j < c; j++)
        {
            if(a[i][j] == min)
            {
                flag = 1;

                for(k = 0; k < r; k++)
                {
                    if(a[k][j] > min)
                    {
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1)
                {
                    printf("%d %d %d", i, j, min);
                    found = 1;
                    break;
                }
            }
        }

        if(found == 1)
            break;
    }

    if(found == 0)
        printf("None");

    return 0;
}