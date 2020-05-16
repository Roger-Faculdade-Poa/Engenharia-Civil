Algoritmo "semnome"
// Disciplina   : [Algoritmos e Programação]
// Professor   : Roger Castro 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/12/2019
Var
// Seção de Declarações das variáveis

var salario, bonus, tempo: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
 
leia (salario)
leia (tempo)

se (tempo >=5) entao
bonus <- salario *0,20
senao
bonus <- salario *0,10
fimse

escreva ("O valor do bonus e: ", bonus)

Fimalgoritmo