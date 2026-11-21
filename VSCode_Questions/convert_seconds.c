#include <stdio.h>
void convertSeconds(int totalSeconds)
{
    int hours, minutes, seconds;
    hours = totalSeconds / 3600;
    int remaining = totalSeconds % 3600;
    minutes = remaining / 60;
    seconds = remaining % 60;
    printf("%d %d %d", hours, minutes, seconds);
}
int main()
{
    int totalSeconds;
    scanf("%d", &totalSeconds);
    convertSeconds(totalSeconds);
    return 0;
}
