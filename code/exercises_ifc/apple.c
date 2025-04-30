#include <stdio.h>

int main(){

    double apple;
    printf("Insert the number of appples bought: ");
    scanf("%lf", &apple);

    if (apple < 12) {
        apple = apple * 0.30;
        printf("You spent: $%.2lf\n", apple);
    } 
    if (apple >= 12) {
        apple = apple * 0.25;
        printf("You spent $%.2lf\n", apple);
    }
}