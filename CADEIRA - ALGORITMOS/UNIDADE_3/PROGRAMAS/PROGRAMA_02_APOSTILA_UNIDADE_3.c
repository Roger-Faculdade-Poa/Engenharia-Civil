// ALGORITMO COMPARA NUMERO
// VARIÁVEIS CONTADORAS

// INCLUSÃO DO CABEÇALHO DA BIBLIOTECA PADRÃO DO C. CABEÇALHO PADRÃO DE ENTRADA E SAÍDA DE DADOS
#include <stdio.h>

// MAIN() -> FUNÇÃO PRINCIPAL DE UM PROGRAMA EM C
// INT FUNÇÃO QUE NO FIM DEVOLVE UM NÚMERO INTEIRO
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
