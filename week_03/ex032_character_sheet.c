#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[] = "DRAGON KNIGHT";
    int max_hp = 150;
    int attack_power = 75;
    int defense = 40;
    int level = 1;

    // แสดงค่าและขนาด
    printf("    === Character Sheet ===\n");
    printf("╔═════════════════════════════╗\n");
    printf("║ %s               ║\n", name);
    printf("╠═════════════════════════════╣\n");
    printf("║ Level : %d                   ║\n", level);
    printf("║ HP    : %d                 ║\n", max_hp);
    printf("║ ATK   : %d                  ║\n", attack_power);
    printf("║ DEF   : %d                  ║\n", defense);
    printf("╠═════════════════════════════╣\n");
    printf("║ HP Bar :  ███████████████   ║\n");
    printf("╚═════════════════════════════╝\n");
    return 0;
}