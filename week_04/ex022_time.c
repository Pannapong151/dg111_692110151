#include <stdio.h>
int main()
{
    int Hours, Minutes, Seconds, Secs;

    printf("Input: ");
    scanf("%d", &Seconds);

    Hours = Seconds / 3600;
    Minutes = (Seconds % 3600) / 60;
    Secs = (Seconds % 60);

    printf("Output: %02d:%02d:%02d\n", (int)Hours, (int)Minutes, (int)Secs);
    return 0;
}