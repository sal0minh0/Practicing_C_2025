#include <stdio.h>

int main (){
    int n;

    printf("Insert a number now: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("It's an even number\n");
    }

    if (n % 2 != 0) {
        printf("It's an odd number\n");
    }
}