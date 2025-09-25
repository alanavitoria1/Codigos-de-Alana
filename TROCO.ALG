Algoritmo "troco"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Igo 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Alana Vitória
// Data atual  : 28/05/2025
Var
preco_unit,quant,dinheiro:real


Inicio
escreva("Qual o valor unitário do produto?")
leia(preco_unit)
escreva("Qual a quantidade comprada?")
leia(quant)
escreva("A compra foi de ",quant*preco_unit,"reais,")
escreva("Qual o valor do pagamento?")
leia(dinheiro)
escreva("O troco será de ",dinheiro-quant*preco_unit,"reais,")

Fimalgoritmo