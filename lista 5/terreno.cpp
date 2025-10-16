#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valor_m2;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valor_m2;

    double area = largura * comprimento;
    double preco = area * valor_m2;

    cout << fixed << setprecision(2);
    cout << "AREA DO TERRENO = " << area << endl;
    cout << "PRECO DO TERRENO = " << preco << endl;

    return 0;
}