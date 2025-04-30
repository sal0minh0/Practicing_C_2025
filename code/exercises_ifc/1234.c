#include <stdio.h>

int main(){
    int passwd;

    printf("Insira sua Senha para Entrar: ");
    scanf("%d", &passwd);

    if (passwd == 1234) {
        printf("ACESSO PERMITIDO\n");

    } else {
        printf("ACESSO NEGADO\n");
    }
}