#include <iostream>

using namespace std;

int main() {
    int s = 0;

    cout << "Calculando a soma dos n�meros pares no intervalo de 100 a 200:" << endl;

    for (int i = 100; i <= 200; ++i) {
        if (i % 2 == 0) {
            s += i;
        }
    }

    cout << "A soma dos n�meros pares �: " << s << endl;

    return 0;
}
