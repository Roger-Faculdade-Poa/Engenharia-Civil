#include <stdio.h>
int main()
{
     char vetor[5];
     int indice;
     printf("Escreva uma frase: ");
     for (indice = 0; indice < 5; indice++) {
          scanf("%c", &vetor[indice] );
     }

     printf("O resultado é:\n");

     for (indice = 0; indice < 5; indice++) {
          printf("%c ", vetor[indice]);
     }

     return 0;
}
