Algoritmo "semnome"
// Disciplina   : [Algoritmos e Programa��o]
// Professor   : Roger Castro 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/12/2019
Var
// Se��o de Declara��es das vari�veis

var salario, bonus, tempo: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
 
leia (salario)
leia (tempo)

se (tempo >=5) entao
bonus <- salario *0,20
senao
bonus <- salario *0,10
fimse

escreva ("O valor do bonus e: ", bonus)

Fimalgoritmo