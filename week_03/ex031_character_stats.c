#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[] = "Dragon Knight";
    int max_hp = 150;
    int attack_power = 75;
    int defense = 40;
    int level = 1;

    // แสดงค่าและขนาด
    printf("=== สร้างตัวละคร ===\n");
    printf("ชื่อตัวละคร : %s\n", name,
           sizeof(name));
    printf("HPสูงสุด : %d\n", max_hp,
           sizeof(max_hp));
    printf("Attack Power : %d\n", attack_power,
           sizeof(attack_power));
    printf("Defense : %d\n", defense,
           sizeof(defense));
    printf("Level : %d\n", level,
           sizeof(level));

    printf("=== สรุปข้อมูลตัวละคร ===\n");
    printf("Name  : %s\n", name,
           sizeof(name));
    printf("Level : %d\n", level,
           sizeof(level));  
    printf("HP    : %d\n", max_hp,
           sizeof(max_hp));
    printf("ATK   : %d\n", attack_power,
           sizeof(attack_power));
    printf("DEF   : %d\n", defense,
           sizeof(defense));
      
    return 0;
}