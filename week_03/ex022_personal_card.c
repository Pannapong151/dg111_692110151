#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char Name[] = "Somsak";
    int Age = 20;
    float GPA = 3.75f;
    char Major[] = "Programming";

    // แสดงค่าและขนาด
    printf("=== Personal Card ===\n");
    printf("┌───────────────────┐\n");
    printf("│Name : %s      │\n", Name,
           sizeof(Name));
    printf("│Age : %d           │\n", Age,
           sizeof(Age));
    printf("│GPA :  %.2f        │ \n", GPA,
           sizeof(GPA));
    printf("│Major : %s│\n", Major,
           sizeof(Major));
    printf("└───────────────────┘\n");
    return 0;
}