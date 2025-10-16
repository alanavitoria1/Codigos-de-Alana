#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos;
    double conta = 50.0;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos > 100) {
        conta += (minutos - 100) * 2.0;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << conta << endl;

    return 0;
}