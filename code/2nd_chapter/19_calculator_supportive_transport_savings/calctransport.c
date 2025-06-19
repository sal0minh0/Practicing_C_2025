#include <stdio.h>

int main (){

    double km, gas$, km_l, park$, toll$, bus$;

    printf("How much can I save with Collective Transport? Insert these values, please:\n");
    printf("Total of Kms driven per Day: ");
    scanf("%lf", &km);

    printf("Cost of the Gas per Liter: ");
    scanf("%lf", &gas$);

    printf("Media of you Car's Car's consumption - Km per Liter in a Day: ");
    scanf("%lf", &km_l);

    printf("Price of the Parking per Day: ");
    scanf("%lf", &park$);
    
    printf("Toll's Price per Day: ");
    scanf("%lf", &toll$);

    printf("Price of the Bus Ticket or your Supportive Transport (Today): ");
    scanf("%lf", &bus$);

    double daily_car_expense = ((km/km_l) * gas$) + park$ + toll$;
    printf("\nYour Daily Expense in your Car is: $%.2lf\n", daily_car_expense);

    double savings = daily_car_expense - bus$;
    printf("You Saved $%.2lf\n", savings);

    return 0;
}