Algoritmo "pagamento"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Igo 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Alana
// Data atual  : 02/06/2025
Var
nome: caractere
valorHora, horas, pagamento: real

Inicio
escreva("Nome do funcionário: ")
leia(nome)
escreva("Valor por hora: ")
leia(valorHora)
escreva("Horas trabalhadas: ")
leia(horas)
pagamento <- valorHora * horas
escreval("O pagamento para ", nome, " deve ser R$ ", pagamento:0:2)

Fimalgoritmo