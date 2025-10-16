#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;

    cin >> preco >> quantidade >> dinheiro;

    double total = preco * quantidade;
    double troco = dinheiro - total;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}