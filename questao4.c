int main() {
    char nivel;
    float salario, aumento, salariofinal;

    
    printf("Informe o nivel do funcionario (a, b ou c): ");
    scanf(" %c", &nivel);

   
    printf("Informe o salario atual: ");
    scanf("%f", &salario);

    
    switch(nivel) {
        case 'a':
            aumento = 5;
            break;
        case 'b':
            aumento = 7;
            break;
        case 'c':
            aumento = 8;
            break;
        default:
            printf("Nivel invalido.\n");
            return 0; 
    }

    
    salariofinal = salario + (salario * (aumento / 100));

    printf("O novo salario e: %.2f\n", salariofinal);

    return 0;
}






