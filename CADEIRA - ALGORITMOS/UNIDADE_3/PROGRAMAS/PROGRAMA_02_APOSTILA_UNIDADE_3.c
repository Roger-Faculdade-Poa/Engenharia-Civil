// ALGORITMO COMPARA NUMERO
// VARI�VEIS CONTADORAS

// INCLUS�O DO CABE�ALHO DA BIBLIOTECA PADR�O DO C. CABE�ALHO PADR�O DE ENTRADA E SA�DA DE DADOS
#include <stdio.h>

// MAIN() -> FUN��O PRINCIPAL DE UM PROGRAMA EM C
// INT FUN��O QUE NO FIM DEVOLVE UM N�MERO INTEIRO
int main() {

int n;
int soma = 0;
int c;
int valor;

printf("Digite o numero a ser comparado?\n");

scanf("%d", &n);

printf("Digite %d que serao comparados\n",n);

for(c=1;c<=n;c++) {

    if(valor > n) {
        soma = soma + 1;
    }
}

printf("Quantidade de numeros maiores que = %d\n",soma);

return 0;

}
