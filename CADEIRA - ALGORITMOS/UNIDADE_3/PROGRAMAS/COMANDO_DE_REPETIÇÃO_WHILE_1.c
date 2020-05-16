#include <stdio.h>

//ALGORITMO SOMA - PÁGINA 4 - UNIDADE 3
// ACUMULADOR - PÁGINA 4 DA APOSTILA

main() {
// Declaração das variáveis
int n, soma=0, c, valor;

// Mostra na tela a mensagem entre aspas duplas
printf("Digite a quantidade de numeros para somar?\n");

// Momento de entrada de dados pelo teclado
scanf("%d", &n);

// Mostra na tela a mensagem que está entre aspas
printf("Digite %d que serao somados\n", n);

// Início da condição de repetiçao PARA -> PARA C=1 E ENQUANTO C FOR MENOR OU IGUAL A N DIGITE MAIS UM VALOR
for (c=1;c<=n;c++) {

    // Entrada de teclado de um novo valor para somar
    scanf("%d", &valor);

    // Calcular a soma total
    soma = soma + valor;
}
// Mostrar na tela o valor total da soma
printf("Soma dos numeros digitados = %d\n", soma);

// retorna zero para não acumular na próxima soma
return 0;

}

