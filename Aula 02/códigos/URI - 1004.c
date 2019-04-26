//Importando biblioteca padrão de entrada/saida de dados
#include<stdio.h>

//iniciando função principal(main)
int main(){
    //declaração das variaveis do tipo int
    int a, b, prod;

    //função scanf() para entrada de dados
    scanf("%d %d", &a, &b);   // %d - (especificar que o tipo da variavel é double)
                            // & - para armazenar o valor no endereço da memoria correto;

    prod = a * b; // processamento de dados

    //função printf() para saída de dados
    printf("PROD = %d\n", prod); // \n - salta uma linha na saída de dados


    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}
