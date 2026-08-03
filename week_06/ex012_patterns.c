#include <stdio.h>
int main()
{
    printf("Triangle\n");
    // triangle pattern
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Square\n");
    // square pattern
    int b = 4;
    for (int row = 1; row <= b; row++)
    {
        for (int col = 1; col <= b; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Diamond\n");
    // diamond pattern
    int m = 3;
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= m - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = m - 1; row >= 1; row--)
    {
        for (int col = 1; col <= m - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}