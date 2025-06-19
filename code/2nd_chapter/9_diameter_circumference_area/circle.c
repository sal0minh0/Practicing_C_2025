#include <stdio.h>

int main (){
    float radius;
    float pi = 3.14159;

    printf("Insert the radius of your Circle: ");
    scanf("%f", &radius);

    printf("\nThe diameter is %f\n", 2 * radius); 
    printf("The circumference is %f\n", 2 * (pi * radius));
    printf("The area is %f\n", pi * (radius * radius));

    return 0;
}