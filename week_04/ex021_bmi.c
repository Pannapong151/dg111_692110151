#include <stdio.h>
int main() {
    float weight, height_cm, height_m, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100;
    bmi = weight / (height_m * height_m);

    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You are Normal.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are Overweight.\n");
    } else {
        printf("You are Obese.\n");
    }

    return 0;
}
