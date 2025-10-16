#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double valorHora, horasTrabalhadas;

    cin >> nome >> valorHora >> horasTrabalhadas;

    double pagamento = valorHora * horasTrabalhadas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;

    return 0;
}