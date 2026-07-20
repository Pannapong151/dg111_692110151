#include <stdio.h>
int main()
{ 
    int GOLD = 1000, item, price, total = 1000, Remaining;
    Remaining = GOLD-price;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", GOLD);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");  
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n"); 
    printf("5. Exit\n");

    printf("Select item:   ");
    scanf("%d", &item);

    printf("=== Purchase ===\n");
    switch (item)
    { 
        case 1:
            price = 50;
            total -= price;
            Remaining = GOLD - price;
            printf("Health Potion: %d Gold.\n", price);
            printf("HP Bonus +50\n");
            break;
        case 2:
            price = 80; 
            total -= price;
            Remaining = GOLD - price;
            printf("Mana Potion: %d Gold.\n", price);
            printf("MP Bonus +30\n");
            break;
        case 3:
            price = 500;
            total -= price;
            Remaining = GOLD - price;
            printf("Iron Sword: %d Gold.\n", price);
            printf("ATK Bonus +20\n");
            break;
        case 4:
            price = 300;
            total -= price;
            Remaining = GOLD - price;
            printf("Leather Armor: %d Gold.\n", price);
            printf("DEF Bonus +15\n");
            break;
        case 5:
            printf("Exiting shop.\n");
            break;
    }
    printf("Remaining: %d\n", Remaining);
    printf("Item purchased successfully!  ✓\n");
}