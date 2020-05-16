// INCLUSÃO DO CABEÇALHO DA BIBLIOTECA PADRÃO DO C. CABEÇALHO PADRÃO DE ENTRADA E SAÍDA DE DADOS
#include <stdio.h>
// INCLUSÃO DA BIBLIOTECA DE PROPÓSITO GERAL PADRÃO DA LINGUAGEM C. FUNÇÕES DE ALOCAÇÃO DE MEMÓRIA, CONTROLE DE PROCESSOS, CONVERSÕES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUNÇÃO PRINCIPAL DE UM PROGRAMA EM C
// INT FUNÇÃO QUE NO FIM DEVOLVE UM NÚMERO INTEIRO

int main()
{
    int pontos;

    printf("Digite o número de seus pontos\n");

    scanf("%d", &pontos);

    if(pontos >= 1000);
    {
        printf("Voce passou de nivel!");
    }

}
