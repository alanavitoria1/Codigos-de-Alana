#include <iostream>
using namespace std;

int main() {
    int duracao;
    cin >> duracao;

    int horas = duracao / 3600;
    int minutos = (duracao % 3600) / 60;
    int segundos = duracao % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}