//Importando biblioteca padr�o de entrada/saida de dados
#include<stdio.h>

//iniciando fun��o principal(main)
int main(){
    //declara��o das variaveis do tipo float
    float a, b, soma;

    //fun��o scanf() para entrada de dados
    scanf("%d %d", &a, &b);   // %d - (especificar que o tipo da variavel � double)
                            // & - para armazenar o valor no endere�o da memoria correto;

    soma = a + b; // processamento de dados

    //fun��o printf() para sa�da de dados
    printf("SOMA = %d\n", soma); // \n - salta uma linha na sa�da de dados


    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}

