Algoritmo "duração"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Igo 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Alana
// Data atual  : 02/06/2025
Var
 tempo, horas, minutos, segundos:  inteiro


Inicio
escreva("Digite a duração em segundos: ")
leia(tempo)
horas <- tempo div 3600
minutos <- (tempo mod 3600) div 60
segundos <- tempo mod 60
escreval(horas, ":", minutos, ":", segundos)

Fimalgoritmo