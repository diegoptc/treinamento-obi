//Importando biblioteca padr�o de entrada/saida de dados
#include<stdio.h>

//iniciando fun��o principal(main)
int main(){
    //declara��o das variaveis do tipo double
    double n = 3.14159, raio, area;

    //fun��o scanf() para entrada de dados
    scanf("%lf", &raio);   // %lf - (especificar que o tipo da variavel � double)
                            // & - para armazenar o valor no endere�o da memoria correto;

    area = n * (raio*raio); // processamento de dados

    //fun��o printf() para sa�da de dados
    printf("A=%.4lf\n", area); // \n - salta uma linha na sa�da de dados
                               // %.4lf - defina saida do tipo double com 4 casa ap�s o ponto decimal

    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}
