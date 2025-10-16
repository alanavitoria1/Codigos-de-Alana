#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel;
    cin >> distancia >> combustivel;

    double consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "CONSUMO MEDIO = " << consumo << " km/l" << endl;

    return 0;
}