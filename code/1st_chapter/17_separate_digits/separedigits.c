#include <stdio.h>

int main(){
    //d = qnt of digits
    int n;

    printf("Digit your integer now: ");
    scanf("%d", &n);

    int d10000 = n / 10000;
    int d1000 = n / 1000 % 10;
    int d100 = n / 100 % 10;
    int d10 = n / 10 % 10;
    int d1 = n % 10;

    printf("%d %d %d %d %d\n", d10000, d1000, d100, d10, d1); 


}