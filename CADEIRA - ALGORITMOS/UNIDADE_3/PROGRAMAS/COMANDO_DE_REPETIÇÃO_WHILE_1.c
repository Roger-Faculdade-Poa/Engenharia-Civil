#include <stdio.h>

//ALGORITMO SOMA - P�GINA 4 - UNIDADE 3
// ACUMULADOR - P�GINA 4 DA APOSTILA

main() {
// Declara��o das vari�veis
int n, soma=0, c, valor;

// Mostra na tela a mensagem entre aspas duplas
printf("Digite a quantidade de numeros para somar?\n");

// Momento de entrada de dados pelo teclado
scanf("%d", &n);

// Mostra na tela a mensagem que est� entre aspas
printf("Digite %d que serao somados\n", n);

// In�cio da condi��o de repeti�ao PARA -> PARA C=1 E ENQUANTO C FOR MENOR OU IGUAL A N DIGITE MAIS UM VALOR
for (c=1;c<=n;c++) {

    // Entrada de teclado de um novo valor para somar
    scanf("%d", &valor);

    // Calcular a soma total
    soma = soma + valor;
}
// Mostrar na tela o valor total da soma
printf("Soma dos numeros digitados = %d\n", soma);

// retorna zero para n�o acumular na pr�xima soma
return 0;

}

