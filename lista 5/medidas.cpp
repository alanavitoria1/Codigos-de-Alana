#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double area_quadrado = pow(A, 2);
    double area_triangulo = (A * B) / 2.0;
    double area_trapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << area_quadrado << endl;
    cout << "AREA DO TRIANGULO = " << area_triangulo << endl;
    cout << "AREA DO TRAPEZIO = " << area_trapezio << endl;

    return 0;
}