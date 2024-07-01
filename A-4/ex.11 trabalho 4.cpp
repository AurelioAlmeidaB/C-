#include <iostream>
using namespace std;

int main() {
    int cN = 0;
    int n;

    cout << "Digite 15 numeros, um de cada vez:\n";

    for (int i = 0; i < 15; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> n;

        if (n < 0) {
            cN++;
        }
    }

    cout << "Quantidade de numeros negativos digitados: " << cN << endl;

    return 0;
}
