#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char ชื่อ[] = "Somsak";
int อายุ = 20;
float GPA = 3.75f;
char วิชาโปรด[] = "Programming";

// แสดงค่าและขนาด
printf("=== ป้อนข้อมูล ===\n");
printf("ชื่อ : %s\n", ชื่อ,
sizeof(ชื่อ));
printf("อายุ : %d\n", อายุ,
sizeof(อายุ));
printf("GPA : %.2f\n", GPA,
sizeof(GPA));
printf("วิชาโปรด : %s\n", วิชาโปรด,
sizeof(วิชาโปรด));

printf("=== ข้อมูลส่วนตัว ===\n");
printf("ชื่อ : %s\n", ชื่อ,
sizeof(ชื่อ));
printf("อายุ : %d ปี\n", อายุ,
sizeof(อายุ));
printf("GPA : %.2f\n", GPA,
sizeof(GPA));
printf("วิชาโปรด : %s\n", วิชาโปรด,
sizeof(วิชาโปรด));
return 0;
}