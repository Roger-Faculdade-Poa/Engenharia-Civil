// inserção da biblioteca do C para entrada e saída de dados
#include <stdio.h>

int main() {

//float vetor[10];

float vetor[10] = { 0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};

vetor[2] = 3;

printf("O valor do vetor na posição 0 é %d\n", vetor[0]);

printf("O valor do vetor na posição 1 é %d\n", vetor[1]);

printf("O valor do vetor na posição 2 é %.20f", vetor[2]);

return 0;

}
