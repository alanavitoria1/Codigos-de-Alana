#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int qtd;
    double total, troco;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = preco * qtd;

    cout << fixed << setprecision(2);

    if (dinheiro >= total) {
        troco = dinheiro - total;
        cout << "TROCO = " << troco << endl;
    } else {
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << total - dinheiro << " REAIS" << endl;
    }

    return 0;
}