#include<stdio.h>

int main (){
    int numero, horas_trabalhadas;
    float salario;
    scanf("%d %d %f", &numero, &horas_trabalhadas, &salario);
    salario = salario * horas_trabalhadas;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
