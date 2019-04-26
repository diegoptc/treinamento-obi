#include<stdio.h>

// %c - eu uso para ler ou imprimir apenas uma caracter
// %s - eu uso para ler ou imprimir uma cadeia de caracteres ou string

int main () {
    char nome[50]; //cadeia de caracteres
    char c; //apenas um caracter;
    double salario_fixo, vlr_vendas, total_receber;
    scanf("%s", nome);
    scanf("%lf %lf", &salario_fixo, &vlr_vendas);
    total_receber = salario_fixo + (vlr_vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_receber);

    return 0;
}
