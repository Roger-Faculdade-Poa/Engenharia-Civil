// INCLUS�O DA BIBLIOTECA DE ENTRADA E SA�DA DE DADOS DO C
#include <stdio.h>

int main()
{
      // DECLARA��O DE UM VETOR FORMADO POR INTEIROS DE TAMANHO 5
      int vetor[5];

      // DECLARA��O DE UMA VARI�VEL DO TIPO INTEIRO CHAMADA �NDICE
      int indice;

      // MENSAGEM A SER ESCRITA NA TELA SOLICITANDO QUE SEJAM DIGITADOS OS 5 N�MEROS DO VETOR
      printf("Escreva 5 n�meros inteiros: ");

      // LA�O DE REPETI��O -> PARA VARI�VEL �NDICE = 0 AT� VARI�VEL �NDICE <5 ACRESCER 1 � VARI�VEL �NDICE
      for (indice = 0; indice < 5; indice++) {

            // LEITURA DOS DADOS FORNECIDOS VIA TECLADO INSERINDO UM INTEIRO(%d) NO ENDERE�O INFORMADO(&) DO �NDICE DO VETOR
            scanf("%d", &vetor[indice] );
      }

     // MOSTRA NA TELA OS VALORES INFORMADOS PARA O VETOR EM ORDEM
     printf("Valores em ordem:\n");

     // LA�O DE REPETI��O -> PARA VARI�VEL �NDICE = 0 AT� VARI�VEL �NDICE <5 ACRESCER 1 � VARI�VEL �NDICE
     for (indice = 0; indice < 5; indice++) {

           // MOSTRA NA TELA OS VALORES INFORMADOS PARA O VETOR EM ORDEM
           printf("%d ", vetor[indice]);
     }

     return 0;
}
