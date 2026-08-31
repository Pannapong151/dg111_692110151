#include <stdio.h>
#include <math.h>

int isCriticalHit(int roundNumber) {
    return (roundNumber % 5 == 0);
}

int calculateDamage(int attack, int defense, int isCrit) {
    int baseDamage = attack - defense;

    if (baseDamage < 0)
        baseDamage = 0;

    if (isCrit)
        return 95;

    return baseDamage;
}

void printCombatResult(int round, int damage, int isCrit, int currentHP, int maxHP) {
    int bars = (currentHP * 10) / maxHP;

    printf("Round %d: ", round);

    if (isCrit)
        printf("** CRITICAL! **");
    else
        printf("Normal");

    printf(" — Damage: %d | Enemy HP: [", damage);

    for (int i = 0; i < 10; i++) {
        if (i < bars)
            printf("#");
        else
            printf("-");
    }

    printf("] %d/%d\n", currentHP, maxHP);
}

int main(void) {
    int attack = 80;
    int defense = 25;
    int enemyHP = 500;
    int enemyMaxHP = 500;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("-------------------------------------------\n");

    for (int round = 1; round <= 10 && enemyHP > 0; round++) {

        int isCrit = isCriticalHit(round);

        int damage = calculateDamage(attack, defense, isCrit);

        enemyHP -= damage;

        if (enemyHP < 0)
            enemyHP = 0;

        printCombatResult(round, damage, isCrit, enemyHP, enemyMaxHP);
    }

    return 0;
}
