//Importando biblioteca padr�o de entrada/saida de dados
#include<stdio.h>

//iniciando fun��o principal(main)
int main(){
    //declara��o da variavel do tipo inteira chamada numero
    int numero;

    //fun��o scanf() para entrada de dados
    scanf("%d", &numero);   // %d - (especificar que o tipo da variavel � inteiro)
                            // & - para armazenar o valor no endere�o da memoria correto;

    //fun��o printf() para sa�da de dados
    printf("Numero digitado: %d", numero);

    //retornando 0(int) para dizer que nosso programa executou corretamente
    return 0;
}


