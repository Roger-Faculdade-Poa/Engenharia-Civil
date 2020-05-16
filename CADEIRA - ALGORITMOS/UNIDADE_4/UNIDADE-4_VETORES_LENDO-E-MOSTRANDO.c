// INCLUSÃO DA BIBLIOTECA DE ENTRADA E SAÍDA DE DADOS DO C
#include <stdio.h>

int main()
{
      // DECLARAÇÃO DE UM VETOR FORMADO POR INTEIROS DE TAMANHO 5
      int vetor[5];

      // DECLARAÇÃO DE UMA VARIÁVEL DO TIPO INTEIRO CHAMADA ÍNDICE
      int indice;

      // MENSAGEM A SER ESCRITA NA TELA SOLICITANDO QUE SEJAM DIGITADOS OS 5 NÚMEROS DO VETOR
      printf("Escreva 5 números inteiros: ");

      // LAÇO DE REPETIÇÃO -> PARA VARIÁVEL ÍNDICE = 0 ATÉ VARIÁVEL ÍNDICE <5 ACRESCER 1 À VARIÁVEL ÍNDICE
      for (indice = 0; indice < 5; indice++) {

            // LEITURA DOS DADOS FORNECIDOS VIA TECLADO INSERINDO UM INTEIRO(%d) NO ENDEREÇO INFORMADO(&) DO ÍNDICE DO VETOR
            scanf("%d", &vetor[indice] );
      }

     // MOSTRA NA TELA OS VALORES INFORMADOS PARA O VETOR EM ORDEM
     printf("Valores em ordem:\n");

     // LAÇO DE REPETIÇÃO -> PARA VARIÁVEL ÍNDICE = 0 ATÉ VARIÁVEL ÍNDICE <5 ACRESCER 1 À VARIÁVEL ÍNDICE
     for (indice = 0; indice < 5; indice++) {

           // MOSTRA NA TELA OS VALORES INFORMADOS PARA O VETOR EM ORDEM
           printf("%d ", vetor[indice]);
     }

     return 0;
}
