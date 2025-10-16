#include <iostream>
using namespace std;

int main() {
    int a, b, c, menor;

    cout << "Digite tres numeros inteiros: ";
    cin >> a >> b >> c;

    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "MENOR = " << menor << endl;

    return 0;
}