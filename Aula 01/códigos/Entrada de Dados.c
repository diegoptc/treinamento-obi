//Importando biblioteca padrão de entrada/saida de dados
#include<stdio.h>

//iniciando função principal(main)
int main(){
    //declaração da variavel do tipo inteira chamada numero
    int numero;

    //função scanf() para entrada de dados
    scanf("%d", &numero);   // %d - (especificar que o tipo da variavel é inteiro)
                            // & - para armazenar o valor no endereço da memoria correto;

    //função printf() para saída de dados
    printf("Numero digitado: %d", numero);

    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}


