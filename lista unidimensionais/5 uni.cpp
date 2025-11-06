#include <iostream>
using namespace std;

int main() {
    int v[10], n;
    for (int i = 0; i < 10; i++) cin >> v[i];
    cin >> n;
    bool f = false;
    for (int i = 0; i < 10; i++)
        if (v[i] == n) f = true;
    if (f) cout << "Sim";
    else cout << "Não";
}