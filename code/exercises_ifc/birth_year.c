#include <stdio.h>

int main (){
    int birth_date;

    printf("Insert your date of birth without the Slash \"/\": ");
    scanf("%d", &birth_date);

    birth_date = birth_date % 10000; 

    if (birth_date <= 2007) printf("You can vote this year.\n");

    else printf("You cannot vote this year\n");

    return 0;
}