#include <stdio.h>

int main() {
    int senhacadastrada, senhadigitada;

    
    scanf("%d", &senhacadastrada);
    printf("Senha cadastrada com sucesso!\n");

    printf("\nPor favor, digite a senha para continuar: ");
    scanf("%d", &senhadigitada);

    while (1) {
        if (senhadigitada == senhacadastrada) {
            printf("Senha valida!\n");
            break;
        } else {
            printf("Senha invalida!\n");
            printf("\nPor favor, digite a senha novamente: ");
            scanf("%d", &senhadigitada);
        }
    }

    return 0;
}





