//declar biblioteca padr�o de I/O(Entrada / Saida)
#include<stdio.h>

//declar fun��o principal
int main(){
    //declar variaveis para leitura
    int a, b, soma;
    scanf("%d %d", &a, &b);

    //processamento de dados
    soma = a + b;

    //saida do valor que est� armazenado em soma
    printf("SOMA = %d\n", soma);

    //retornar 0 para "falar" que meu programa rodou suave
    return 0;
}
