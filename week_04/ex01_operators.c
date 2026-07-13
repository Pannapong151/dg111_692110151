#include <stdio.h>

int main() {
    printf("1. Expression : 10/3 = %d\n", 10/3);

    int expression_1 = 10/3;
    printf("Expression : 10/3 = %d\n", expression_1);

    int expression_2 = 10.0/3;
    printf("Expression : 10.0/3 = %d\n", expression_2);

    float expression_3 = 10.0/3;
    printf("Expression : 10.0/3 = %f\n", expression_3);

    int expression_4 = 10%3;
    printf("Expression : 10%%3 = %d\n", expression_4);

    int expression_5 = -7%3;
    printf("Expression : -7%%3 = %d\n", expression_5);

    int expression_6 = 7%-3;
    printf("Expression : 7%%-3 = %d\n", expression_6);

   
printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);


int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    return 0;
}
