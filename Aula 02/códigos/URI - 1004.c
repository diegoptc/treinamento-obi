//Importando biblioteca padr�o de entrada/saida de dados
#include<stdio.h>

//iniciando fun��o principal(main)
int main(){
    //declara��o das variaveis do tipo int
    int a, b, prod;

    //fun��o scanf() para entrada de dados
    scanf("%d %d", &a, &b);   // %d - (especificar que o tipo da variavel � double)
                            // & - para armazenar o valor no endere�o da memoria correto;

    prod = a * b; // processamento de dados

    //fun��o printf() para sa�da de dados
    printf("PROD = %d\n", prod); // \n - salta uma linha na sa�da de dados


    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}
