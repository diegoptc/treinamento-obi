//Importando biblioteca padrão de entrada/saida de dados
#include<stdio.h>

//iniciando função principal(main)
int main(){
    //declaração das variaveis do tipo inteiro
    int a, b, x;

    //função scanf() para entrada de dados
    scanf("%d %d", &a, &b);   // %d - (especificar que o tipo da variavel é inteiro)
                            // & - para armazenar o valor no endereço da memoria correto;

    x = a + b; // processamento de dados

    //função printf() para saída de dados
    printf("X = %d\n", x); // \n - salta uma linha na saída de dados

    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}
