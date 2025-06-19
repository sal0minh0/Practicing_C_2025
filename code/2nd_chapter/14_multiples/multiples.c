#include <stdio.h>

int main (){
    int n1, n2;

    printf("Insert two integers: ");
    scanf ("%d %d", &n1, &n2);

    if(n1 % n2 == 0) {
        printf("The 1st integer is a multiple of the 2nd\n");
    }
    return 0;
}