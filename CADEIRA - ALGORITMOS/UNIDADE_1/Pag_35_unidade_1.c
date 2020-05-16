// INCLUSÃO DO CABEÇALHO DA BIBLIOTECA PADRÃO DO C. CABEÇALHO PADRÃO DE ENTRADA E SAÍDA DE DADOS
#include <stdio.h>
// INCLUSÃO DA BIBLIOTECA DE PROPÓSITO GERAL PADRÃO DA LINGUAGEM C. FUNÇÕES DE ALOCAÇÃO DE MEMÓRIA, CONTROLE DE PROCESSOS, CONVERSÕES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUNÇÃO PRINCIPAL DE UM PROGRAMA EM C
// INT FUNÇÃO QUE NO FIM DEVOLVE UM NÚMERO INTEIRO

int main()
{
//DECLARAÇÃO DAS VARIÁVEIS LOCAIS COM SEUS RESPECTIVOS TIPOS
float salario;
int tempo;
float bonus;

// PRINTF -> FUNÇÃO USADA PARA EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
printf("Digite o valor do salário R$: ");

// SCANF -> FUNÇÃO PARA INSERÇÃO DE DADOS FORMATADOS VIA TECLADO
scanf("%f", &salario);

// PRINTF -> FUNÇÃO USADA PARA EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
printf("\nDigite o valor do tempo em anos: ");

// SCANF -> FUNÇÃO PARA INSERÇÃO DE DADOS FORMATADOS VIA TECLADO
scanf("%d", &tempo);

if (tempo >= 5)
{
    bonus = salario * 0.20;
}
else
{
    bonus = salario * 0.10;
}

printf("O valor do bônus é R$: %.2f\n", bonus);

}



}
