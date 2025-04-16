#include <stdio.h>

int main(){
    double weight, height;

    printf("BMI Calculator, Please Insert your Weight (in KG) and your Height (in Meters): ");
    scanf("%lf %lf", &weight, &height);

    double bmi = weight/(height * height);

    printf("\nYour Weight Category is: \"");
    if (bmi < 18.5) printf("Underweight\"\n");

    if (bmi >= 18.5 && bmi <= 24.9) printf("Normal\"\n");

    if (bmi >= 25 && bmi <= 29.9) printf("Overweight\"\n");

    if (bmi >= 30) printf("Obese\"\n"); 
    return 0;
}