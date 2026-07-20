#include <stdio.h>
int main()
{
    int max_HP = 100, damage, count, hp;

    printf("Enter Damage:   ");
    scanf("%d", &damage);
    printf("Enter Attack Count:   ");
    scanf("%d", &count);

    printf("Max HP: %d\n", max_HP);
    printf("Damage Taken: %d\n", damage * count);
    if (hp > 20 && hp < 80)
    {
        printf("Poisoned (1/1): 1\n");
    }
    else
        printf("Poisoned (0/1): 0\n");

    hp = max_HP - (damage * count);
    printf("Attack Count: %d\n", count);
    printf("=== Character Status ===\n");

    if (hp >= 80 && hp <= 100)
    {
        printf("State: Normal\n");
    }
    else if (hp > 20 && hp < 80)
    {
        printf("State: POISONED\n");
    }
    else if (hp > 0 && hp <= 20)
    {
        printf("State: Critical\n");
    }
    else if (hp <= 0)
    {
        printf("State: DEAD\n");
    }
    if (count >= 5)
        printf("Ultimate Ready! (Attack #5)\n");
}
