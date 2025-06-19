#include <stdio.h>

void withoutConvSpecifiers () {
    printf("1 2 3 4\n");
}

void with4ConvSpecifiers () {
    printf("%d %d %d %d\n", 1, 2, 3, 4);
}

void with4TimesPrintf () {
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");
}

int main () {
    withoutConvSpecifiers();
    with4ConvSpecifiers ();
    with4TimesPrintf ();
    
    return 0;
}