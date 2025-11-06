#include <iostream>
using namespace std;

int main() {
    int v[20], p = 0, i = 0;
    for (int j = 0; j < 20; j++) {
        cin >> v[j];
        if (v[j] % 2 == 0) p++;
        else i++;
    }
    cout << p << " " << i;
}