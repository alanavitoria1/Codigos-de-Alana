#include <iostream>
using namespace std;

int main() {
    float v[8], soma = 0;
    for (int i = 0; i < 8; i++) cin >> v[i];
    for (int i = 0; i < 8; i++) soma += v[i];
    cout << soma / 8;
}
