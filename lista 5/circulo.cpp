#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r;
    const double PI = 3.14159;

    cin >> r;
    double area = PI * pow(r, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}