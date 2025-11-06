#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5], v3[10], j = 0;
    for (int i = 0; i < 5; i++) cin >> v1[i];
    for (int i = 0; i < 5; i++) cin >> v2[i];
    for (int i = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }
    for (int i = 0; i < 10; i++) cout << v3[i] << " ";
}