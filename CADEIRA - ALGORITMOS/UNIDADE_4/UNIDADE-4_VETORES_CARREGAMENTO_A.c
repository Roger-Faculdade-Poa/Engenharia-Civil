#include <stdio.h>

int main()

{

      int i,tamanho;

      printf("Digite um número inteiro para definir o tamanho do vetor.");

‍

      scanf("%d\n", &tamanho);

‍

      int vetor[tamanho];

‍

      for (i = 0; i < tamanho; i++) {

      vetor[i] = i;

‍

      printf("O valor do vetor no índice %d é de %d.\n",i,vetor[i]);

      }

}
