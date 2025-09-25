Algoritmo "Retangulo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Igo 
// Descrição   : Retangulo
// Autor(a)    : Alana Vitória Ferreira Araujo
// Data atual  : 28/05/2025
Var
comp,larg,area,peri,diag:real

Inicio
escreva("Digite o comprimento:")
leia(comp)
escreva("Digite a largura:")
leia(larg)
area<-comp*larg
peri<-2*comp+2*larg
diag<-(comp^2+larg^2)^(1/2)
escreval("AREA=",area:0:4)
escreval("PERI=",peri:0:4)
escreval("DIAG=",diag:0:4)
Fimalgoritmo