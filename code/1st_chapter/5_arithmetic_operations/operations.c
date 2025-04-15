#include <stdio.h>

void operations (int n1, int n2) {
    //sum
    printf("Sum == %d\n", n1 + n2);

    //sub
    printf("Sub == %d\n", n1 - n2);

    //mult
    printf("Mult == %d\n", n1 * n2);

    //div
    printf("Div == %d\n", n1 / n2);

    //mod
    printf("Mod == %d\n", n1 % n2);

}

int main () {
    int n1, n2;

    printf("Arithmetic Operations, Insert two numbers: ");
    scanf("%d %d", &n1, &n2);

    operations(n1, n2);
    return 0;
}

