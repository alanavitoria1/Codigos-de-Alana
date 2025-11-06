#include <iostream>
using namespace std;

int main() {
    int m[5][5], l, s = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) cin >> m[i][j];
    cin >> l;
    for (int j = 0; j < 5; j++) s += m[l][j];
    cout << s;
}
