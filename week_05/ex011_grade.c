#include <stdio.h>
int main() {
    float SCORE;

    printf("Enter your score: ");
    scanf("%f", &SCORE);

    if (SCORE > 80) {
        printf("Grade A (4.0)");
     } else if (SCORE >= 75 && SCORE <= 79){
        printf("Grade B+ (3.5)");
     } else if (SCORE >= 70 && SCORE <= 74){
        printf("Grade B (3.0)");
     } else if (SCORE >= 65 && SCORE <= 69){
        printf("Grade C+ (2.5)");
     } else if (SCORE >= 60 && SCORE <= 64){
        printf("Grade C (2.0)");
     } else if (SCORE >= 55 && SCORE <= 59){
        printf("Grade D+ (1.5)");
     } else if (SCORE >= 50 && SCORE <= 54){
        printf("Grade D (1.0)");
     } else {
        printf("Grade F (0.0)");
    }
    if (SCORE >= 50){
        printf("— Pass");
    } else printf("— Fail");
    return 0;
}
