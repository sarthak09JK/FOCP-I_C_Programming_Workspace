#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i;
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch == ' ')
        {
            spaces++;
        }
        else if(isdigit((unsigned char)ch))
        {
            digits++;
        }
        else if(isalpha((unsigned char)ch))
        {
            ch = tolower((unsigned char)ch);

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("%d %d %d %d", vowels, consonants, digits, spaces);

    return 0;
}