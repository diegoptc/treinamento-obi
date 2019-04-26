//Importando biblioteca padrão de entrada/saida de dados
#include<stdio.h>

//iniciando função principal(main)
int main(){
    //declaração das variaveis do tipo float
    float a, b, soma;

    //função scanf() para entrada de dados
    scanf("%d %d", &a, &b);   // %d - (especificar que o tipo da variavel é double)
                            // & - para armazenar o valor no endereço da memoria correto;

    soma = a + b; // processamento de dados

    //função printf() para saída de dados
    printf("SOMA = %d\n", soma); // \n - salta uma linha na saída de dados


    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}

