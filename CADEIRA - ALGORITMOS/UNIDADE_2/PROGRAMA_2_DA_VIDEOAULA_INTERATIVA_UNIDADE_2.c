// INCLUSÃO DO CABEÇALHO DA BIBLIOTECA PADRÃO DO C. CABEÇALHO PADRÃO DE ENTRADA E SAÍDA DE DADOS
#include <stdio.h>
// INCLUSÃO DA BIBLIOTECA DE PROPÓSITO GERAL PADRÃO DA LINGUAGEM C. FUNÇÕES DE ALOCAÇÃO DE MEMÓRIA, CONTROLE DE PROCESSOS, CONVERSÕES E OUTRAS
#include <stdlib.h>

// MAIN() -> FUNÇÃO PRINCIPAL DE UM PROGRAMA EM C
// INT FUNÇÃO QUE NO FIM DEVOLVE UM NÚMERO INTEIRO
int main()
{
    // DECLARAÇÃO DA VARIÁVEL DE NOME NUMERO DO TIPO INTEIRO
    int numero;

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
    printf("Digite o número\n");

    // SCANF -> FUNÇÃO PARA LEITURA DE DADOS INFORMADOS VIA TECLADO
    scanf("%d", &numero);

    if(numero%2==0) {
        int metade = numero /2;
        printf("A metade do numero eh %d", metade);
    }


}
