//Importando biblioteca padrão de entrada/saida de dados
#include<stdio.h>

//iniciando função principal(main)
int main(){
    //declaração das variaveis do tipo double
    double n = 3.14159, raio, area;

    //função scanf() para entrada de dados
    scanf("%lf", &raio);   // %lf - (especificar que o tipo da variavel é double)
                            // & - para armazenar o valor no endereço da memoria correto;

    area = n * (raio*raio); // processamento de dados

    //função printf() para saída de dados
    printf("A=%.4lf\n", area); // \n - salta uma linha na saída de dados
                               // %.4lf - defina saida do tipo double com 4 casa após o ponto decimal

    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}
