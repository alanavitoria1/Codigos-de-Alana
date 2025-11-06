#include <iostream>
using namespace std;

int main() {
    int m[4][4], n, c = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) cin >> m[i][j];
    cin >> n;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] == n) c++;
    cout << c;
}
