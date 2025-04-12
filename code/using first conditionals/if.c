#include <stdio.h>

int main (void) {
    int n1, n2;

    printf("First Conditionals\nInsert numbers: ");

    scanf("%d %d", &n1, &n2);

    if (n1 == n2) {
        printf("The numbers %d and %d are equals\n", n1, n2);
    }
    
    if (n1 != n2) {
        printf("The numbers %d and %d are diferent\n", n1, n2);
    }
        
    if (n1 > n2) {
        printf("The number %d is greater than %d.\n", n1, n2);
    }

    if (n1 < n2) {
        printf("The number %d is less than %d.\n", n1, n2);
    }

    if (n1 >= n2) {
        printf("The number %d is greater or equal to %d.\n", n1, n2);
    }

    if (n2 >= n1) {
        printf("The number %d is less or equal to %d.\n", n1, n2);
    }
    return 0;
}