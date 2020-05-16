// INCLUSÃO DO CABEÇALHO DA BIBLIOTECA PADRÃO DO C. CABEÇALHO PADRÃO DE ENTRADA E SAÍDA DE DADOS
#include <stdio.h>
// INCLUSÃO DA BIBLIOTECA DE PROPÓSITO GERAL PADRÃO DA LINGUAGEM C. FUNÇÕES DE ALOCAÇÃO DE MEMÓRIA, CONTROLE DE PROCESSOS, CONVERSÕES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUNÇÃO PRINCIPAL DE UM PROGRAMA EM C
// INT FUNÇÃO QUE NO FIM DEVOLVE UM NÚMERO INTEIRO
int main()
{
    // DECLARAÇÃO DA VARIÁVEL DE NOME NUMERO1 e NUMERO2 DO TIPO INTEIRO
    int numero1, numero2;

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
    printf("Digite o valor do número 1:\n");

    // SCANF -> FUNÇÃO PARA INSERÇÃO DE DADOS FORMATADOS VIA TECLADO
    scanf("%d", &numero1);

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
    printf("Digite o valor do número 2:\n");

    // SCANF -> FUNÇÃO PARA INSERÇÃO DE DADOS FORMATADOS VIA TECLADO
    scanf("%d", &numero2);
    // IF -> SE O VALOR DO NÚMERO 1 É IGUAL AO VALOR DO NÚMERO 2
    if(numero1==numero2)
    {
        // PRINTF -> EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
        printf("Os números sao iguais!");
    }
    // ELSE -> SENÃO
    else
    {
        // IF -> SE O NÚMERO 1 É MAIOR QUE O NÚMERO 2
        if(numero1>numero2)
        {
            // PRINTF -> EXIBIR NA TELA O RESULTADO DA SUBTRAÇÃO DO VALOR DO NÚMERO 1 MENOS O VALOR DO NÚMERO 2
            printf("%d", numero1-numero2);
        }
        // ELSE -> SENÃO
        else
        {
            // PRINTF -> EXIBIR NA TELA O RESULTADO DA SUBTRAÇÃO DO VALOR DO NÚMERO 2 MENOS O VALOR DO NÚMERO 1
            printf("%d", numero2-numero1);
        }

    }
}

