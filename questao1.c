



//professor tentei de toda forma possivel essa, foi o mais perto que conseguir chegar

#include <stdio.h>

int main() {
    int ano;

    
    scanf("%d", &ano);

    if ((ano >= 1896 && (ano - 1896) % 4 == 0 && ano < 2022) || (ano >= 1930 && (ano - 1930) % 4 == 0 && ano <= 2022)) {
        printf(" Os Jogos Olimpicos de Verao ocorreram no ano de %d\n", ano);
    } else {
        printf(" nao houve Jogos Olimpicos de Verao no ano de %d\n", ano);
    }

    if ((ano >= 1930 && (ano - 1930) % 4 == 0 && ano <= 2022)) {
        printf(" A Copa do Mundo de Futebol ocorreu no ano de %d\n", ano);
    } else  {
        printf(" nao houve Copa do Mundo de Futebol no ano de %d\n", ano);
    }

    return 0;
}

    return 0;
}







