// ALGORITMO SOMA - VARI�VEL ACUMULADORA

// INCLUS�O DO CABE�ALHO DA BIBLIOTECA PADR�O DO C. CABE�ALHO PADR�O DE ENTRADA E SA�DA DE DADOS
#include <stdio.h>

// MAIN() -> FUN��O PRINCIPAL DE UM PROGRAMA EM C
// INT FUN��O QUE NO FIM DEVOLVE UM N�MERO INTEIRO
int main()
{

    // DECLARA��O DAS VARI�VEIS DO TIPO INTEIRO n, soma, c, e valor
    int n; // DECLARA��O DA VARI�VEL INTEIRA n
    int soma = 0; // DECLARA��O DA VARI�VEL INTEIRA soma E ATRIBUI��O DE SEU VALOR INICIAL EM 0
    int c; // DECLARA��O DA VARI�VEL INTEIRA c
    int valor; // DECLARA��O DA VARI�VEL INTEIRA valor

    // PRINTF -> COMANDO USADO PARA EXIBIR NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
    printf("Digite a quantidade de numeros para somar\n");

    // SCANF -> FUN��O PARA INSER��O DA QUANTIDADE DE NUMEROS A SEREM SOMADOS, VIA TECLADO
    // %d -> ESPECIFICA QUE AS INSER��ES DEVE SER DE N�MEROS INTEIROS
    // &n -> ESPECIFICA VIA TECLADO QUANTOS N�MEROS SER�O SOMADOS
    scanf("%d", &n);

    // PRINTF -> COMANDO QUE EXIBE NA TELA A MENSAGEM QUE EST� ENTRE ASPAS
    // n -> QUANTIDADE DE N�MEROS QUE SER�O SOMADOS
    printf("Digite os %d numeros que serao somados\n", n);

    // FOR -> PARA C=1 E C MENOR E IGUAL A n, ADICIONE 1
    for(c=1; c<=n; c++)
    {
        // SCANF -> INFORME VIA TECLADO OS n N�MEROS QUE SERAO SOMADOS
        scanf("%d", &valor);

        soma = soma + valor;
    }

    printf("Soma dos numeros digitados = %d\n", soma);

    return 0;

}
