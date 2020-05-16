// ALGORITMO SOMA - VARIÁVEL ACUMULADORA

// INCLUSÃO DO CABEÇALHO DA BIBLIOTECA PADRÃO DO C. CABEÇALHO PADRÃO DE ENTRADA E SAÍDA DE DADOS
#include <stdio.h>

// MAIN() -> FUNÇÃO PRINCIPAL DE UM PROGRAMA EM C
// INT FUNÇÃO QUE NO FIM DEVOLVE UM NÚMERO INTEIRO
int main()
{

    // DECLARAÇÃO DAS VARIÁVEIS DO TIPO INTEIRO n, soma, c, e valor
    int n; // DECLARAÇÃO DA VARIÁVEL INTEIRA n
    int soma = 0; // DECLARAÇÃO DA VARIÁVEL INTEIRA soma E ATRIBUIÇÃO DE SEU VALOR INICIAL EM 0
    int c; // DECLARAÇÃO DA VARIÁVEL INTEIRA c
    int valor; // DECLARAÇÃO DA VARIÁVEL INTEIRA valor

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
    printf("Digite a quantidade de numeros para somar\n");

    // SCANF -> FUNÇÃO PARA INSERÇÃO DA QUANTIDADE DE NUMEROS A SEREM SOMADOS, VIA TECLADO
    // %d -> ESPECIFICA QUE AS INSERÇÕES DEVE SER DE NÚMEROS INTEIROS
    // &n -> ESPECIFICA VIA TECLADO QUANTOS NÚMEROS SERÃO SOMADOS
    scanf("%d", &n);

    // PRINTF -> COMANDO QUE EXIBE NA TELA A MENSAGEM QUE ESTÁ ENTRE ASPAS
    // n -> QUANTIDADE DE NÚMEROS QUE SERÃO SOMADOS
    printf("Digite os %d numeros que serao somados\n", n);

    // FOR -> PARA C=1 E C MENOR E IGUAL A n, ADICIONE 1
    for(c=1; c<=n; c++)
    {
        // SCANF -> INFORME VIA TECLADO OS n NÚMEROS QUE SERAO SOMADOS
        scanf("%d", &valor);

        soma = soma + valor;
    }

    printf("Soma dos numeros digitados = %d\n", soma);

    return 0;

}
