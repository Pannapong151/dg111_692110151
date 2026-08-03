#include <stdio.h>
int main() {
    // for loop
    for (int i = 1; i <= 10; i++) {
        printf("i = %d\n", i);
    }

    // while loop
    int o = 1;
    while (o <= 10) {
        printf("o = %d\n", o);
        o++;
    }
    
    // do while loop
    int p = 1;
    do {
        printf("p = %d\n", p);
        p++;
    } while (p <= 10);

    int sum = 0;
    for (int j = 1; j <= 10; j++) {
        sum += j;
        }
        printf("Sum: %d\n", sum);
}