// INCLUS�O DO CABE�ALHO DA BIBLIOTECA PADR�O DO C. CABE�ALHO PADR�O DE ENTRADA E SA�DA DE DADOS
#include <stdio.h>
// INCLUS�O DA BIBLIOTECA DE PROP�SITO GERAL PADR�O DA LINGUAGEM C. FUN��ES DE ALOCA��O DE MEM�RIA, CONTROLE DE PROCESSOS, CONVERS�ES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUN��O PRINCIPAL DE UM PROGRAMA EM C
// INT FUN��O QUE NO FIM DEVOLVE UM N�MERO INTEIRO

int main()
{
//DECLARA��O DAS VARI�VEIS LOCAIS COM SEUS RESPECTIVOS TIPOS
float salario;
int tempo;
float bonus;

// PRINTF -> FUN��O USADA PARA EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
printf("Digite o valor do sal�rio R$: ");

// SCANF -> FUN��O PARA INSER��O DE DADOS FORMATADOS VIA TECLADO
scanf("%f", &salario);

// PRINTF -> FUN��O USADA PARA EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
printf("\nDigite o valor do tempo em anos: ");

// SCANF -> FUN��O PARA INSER��O DE DADOS FORMATADOS VIA TECLADO
scanf("%d", &tempo);

if (tempo >= 5)
{
    bonus = salario * 0.20;
}
else
{
    bonus = salario * 0.10;
}

printf("O valor do b�nus � R$: %.2f\n", bonus);

}



}
