int main() {
    int numero, digito, soma = 0;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("%d e um numero par.\n", numero);
    } else {
        printf("%d e um numero impar.\n", numero);
    }

    
    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}