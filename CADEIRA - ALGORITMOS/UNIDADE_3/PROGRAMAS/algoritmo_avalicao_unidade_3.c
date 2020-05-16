#include <stdio.h>

int main(){

float p1, p2, p3, min, pesquisa;

min = 1.80;

p1 = 1.73;

p2 = 1.81;

p3 = 1.83;

printf("----CODIGO PESQUISA ALTURA PESSOAS----:\n\n");

printf("Altura da Pessoa 1: %.2f\n\n",p1);

printf("Altura da Pessoa 2: %.2f\n\n",p2);

printf("Altura da Pessoa 3: %.2f\n\n",p3);

printf(" Digite 1 para pesquisa e 2 para sair: ");

scanf("%d", &pesquisa);

do {

//estrutura de repetição

foreach($pessoa as $v){

if($v > $alturaPermitida)

echo "Sua altura é de: " . $v . ', com isto, sua entrada é permitida.';

elseif($v <= $alturaPermitida)

echo "Sua altura é de: " . $v . ', com isto, sua entrada NÃO É PERMITIDA.';

}


