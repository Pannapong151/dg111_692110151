#include <stdio.h>
#include <math.h>
int main()
{
    float Player_ATK = 100, Enemy_DEF = 60, Hit_Number;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack: %.2f\n", Player_ATK);
    printf("Enemy Defense: %.2f\n", Enemy_DEF);
    printf("Enter Hit Number: ");
    scanf("%f", &Hit_Number);
    float Damage = (Player_ATK - Enemy_DEF) * Hit_Number;
    printf("Total Damage: %.2f\n", Damage);

    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack: %.2f\n", Player_ATK);
    printf("Enemy Defense: %.2f\n", Enemy_DEF);
    printf("Enter Hit Number: ");
    scanf("%f", &Hit_Number);
    float Total_Damage = (int)ceil((float)Damage * 1.5f);
    printf("Total Damage (Critical Hit): %.2f *** CRITICAL HIT! x1.5 **\n", Total_Damage);

    return 0;
}