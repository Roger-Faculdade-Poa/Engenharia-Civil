// INCLUS�O DO CABE�ALHO DA BIBLIOTECA PADR�O DO C. CABE�ALHO PADR�O DE ENTRADA E SA�DA DE DADOS
#include <stdio.h>
// INCLUS�O DA BIBLIOTECA DE PROP�SITO GERAL PADR�O DA LINGUAGEM C. FUN��ES DE ALOCA��O DE MEM�RIA, CONTROLE DE PROCESSOS, CONVERS�ES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUN��O PRINCIPAL DE UM PROGRAMA EM C
// INT FUN��O QUE NO FIM DEVOLVE UM N�MERO INTEIRO
int main()
{
    // DECLARA��O DA VARI�VEL DE NOME NUMERO DO TIPO INTEIRO
    int numero;

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
    printf("Digite o n�mero\n");

    // SCANF -> FUN��O PARA LEITURA DE DADOS INFORMADOS VIA TECLADO
    scanf("%d", &numero);

    if(numero%2==0) {
        int metade = numero /2;
        printf("A metade do numero eh %d", metade);
    }


}
