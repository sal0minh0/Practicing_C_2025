#include <stdio.h>

int main() {
    int n1, n2;
    printf("Insert two numbers for Comparing: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) { 
        printf("é maior\n");
    }
    if (n1 == n2) {
        printf("Esses números são iguais\n");
    }

    return 0;
}