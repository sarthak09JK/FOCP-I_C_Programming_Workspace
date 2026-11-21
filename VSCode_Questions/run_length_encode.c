#include <stdio.h>

int main()
{
    char str[200];
    int i, count;

    printf("Enter a string: ");
    scanf("%199s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i+1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}