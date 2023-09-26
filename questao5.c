int main() {
    int valor1, valor2;

    printf("Digite dois valores inteiros separados por espaco: ");
    scanf("%d %d", &valor1, &valor2);

    if (valor1 > valor2) {
        if (valor1 % valor2 == 0) {
            printf("%d e maior que %d e e multiplo de %d.\n", valor1, valor2, valor2);
        } else {
            printf("%d e maior que %d, mas nao e multiplo de %d.\n", valor1, valor2, valor2);
        }
    } else if (valor2 > valor1) {
        if (valor2 % valor1 == 0) {
            printf("%d e maior que %d e multiplo de %d.\n", valor2, valor1, valor1);
        } else {
            printf("%d e maior que %d, mas nao e multiplo de %d.\n", valor2, valor1, valor1);
        }
    } else {
        printf("Os dois valores sao iguais.\n");
    }

    return 0;
}