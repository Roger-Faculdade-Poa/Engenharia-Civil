// INCLUS�O DO CABE�ALHO DA BIBLIOTECA PADR�O DO C. CABE�ALHO PADR�O DE ENTRADA E SA�DA DE DADOS
#include <stdio.h>
// INCLUS�O DA BIBLIOTECA DE PROP�SITO GERAL PADR�O DA LINGUAGEM C. FUN��ES DE ALOCA��O DE MEM�RIA, CONTROLE DE PROCESSOS, CONVERS�ES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUN��O PRINCIPAL DE UM PROGRAMA EM C
// INT FUN��O QUE NO FIM DEVOLVE UM N�MERO INTEIRO
int main()
{
    // DECLARA��O DA VARI�VEL DE NOME NUMERO1 e NUMERO2 DO TIPO INTEIRO
    int numero1, numero2;

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
    printf("Digite o valor do n�mero 1:\n");

    // SCANF -> FUN��O PARA INSER��O DE DADOS FORMATADOS VIA TECLADO
    scanf("%d", &numero1);

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
    printf("Digite o valor do n�mero 2:\n");

    // SCANF -> FUN��O PARA INSER��O DE DADOS FORMATADOS VIA TECLADO
    scanf("%d", &numero2);
    // IF -> SE O VALOR DO N�MERO 1 � IGUAL AO VALOR DO N�MERO 2
    if(numero1==numero2)
    {
        // PRINTF -> EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
        printf("Os n�meros sao iguais!");
    }
    // ELSE -> SEN�O
    else
    {
        // IF -> SE O N�MERO 1 � MAIOR QUE O N�MERO 2
        if(numero1>numero2)
        {
            // PRINTF -> EXIBIR NA TELA O RESULTADO DA SUBTRA��O DO VALOR DO N�MERO 1 MENOS O VALOR DO N�MERO 2
            printf("%d", numero1-numero2);
        }
        // ELSE -> SEN�O
        else
        {
            // PRINTF -> EXIBIR NA TELA O RESULTADO DA SUBTRA��O DO VALOR DO N�MERO 2 MENOS O VALOR DO N�MERO 1
            printf("%d", numero2-numero1);
        }

    }
}

