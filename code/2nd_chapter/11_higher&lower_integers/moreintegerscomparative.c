#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5;

    printf("Insert now five integers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    // n1 is Higher
    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        printf("The higher is: %d\n", n1);
    }

    // n2 is Higher
    if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        printf("The higher is: %d\n", n2);
    }

    // n3 is Higher
    if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        printf("The higher is: %d\n", n3);
    }

    // n4 is Higher
    if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) {
        printf("The higher is: %d\n", n4);
    }

    // n5 is Higher
    if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4) {
        printf("The higher is: %d\n", n5);
    }
      ////////////// 
     //////////////
    // n1 is Lower
    if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        printf("The lower is: %d\n", n1);
    }

    // n2 is Lower
    if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        printf("The lower is: %d\n", n2);
    }

    // n3 is Lower
    if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        printf("The lower is: %d\n", n3);
    }

    // n4 is Lower
    if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        printf("The lower is: %d\n", n4);
    }

    // n5 is Lower
    if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4) {
        printf("The lower is: %d\n", n5);
    }
    return 0;
}