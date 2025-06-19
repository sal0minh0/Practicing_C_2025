#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite três inteiros diferentes: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int sum = n1 + n2 + n3;

    int media = (n1 + n2 + n3)/3;

    int prod = n1 * n2 * n3;

    printf("A soma é %d\n", sum);

    printf("A média é %d\n", media);

    printf("O produto é %d\n", prod);
      /////////////
     //Lower is n1
     if (n1 < n2 && n1 < n3) {
        printf("O menor é %d\n", n1);
    }
    
    //Lower is n2
    if (n2 < n1 && n2 < n3) {
        printf("O menor é %d\n", n2);
    }
    
    //Lower is n3
    if (n3 < n1 && n3 < n2) {
        printf("O menor é %d\n", n3);
    }
     //////////////
    //Higher is n1
    if (n1 > n2 && n1 > n3) {
        printf("O maior é %d\n", n1);
    }

    //Higher is n2
    if (n2 > n1 && n2 > n3) {
        printf("O maior é %d\n", n2);
    }

    //Higher is n3
    if (n3 > n1 && n3 > n2) {
        printf("O maior é %d\n", n3);
    }
    return 0;
}